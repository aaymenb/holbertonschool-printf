#include <stdarg.h>

#include "main.h"

/**
 * print_int - Prints an integer as a decimal number
 * @ap: The va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int num;
	int len = 0;
	int div = 1;

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}

	else
	{
		num = n;
	}

	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
	return (len);
}

