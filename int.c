#include "main.h"

/**
 * int_to_str - Converts an integer to a string
 * @n: the integer to convert
 * @str: the string to store the converted integer
 * Return: Length of the string
 */
int int_to_str(int n, char *str)
{
	return (sprintf(str, "%d", n));
}

/**
 * print_int - Prints an integer
 * @args: list of arguments containing the integer to be printed
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int number = va_arg(args, int);

	char buffer[12];

	int index, count;

	count = int_to_str(number, buffer);
	for (index = 0; buffer[index]; index++)
	{
		_putchar(buffer[index]);
	}
	return (count);
}
