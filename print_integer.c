#include "main.h"

/**
 * printnumber - function that prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int printnumber(int n)
{
	int count = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		count += 2;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10 != 0)
	{
		count += printnumber(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_integer - function that prints an integer from a va_list
 * @arguments: va_list containing the integer to print
 * Return: number of characters printed
 */
int print_integer(va_list arguments)
{
	int number = va_arg(arguments, int);

	return (printnumber(number));
}
