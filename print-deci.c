#include <stdarg.h>
#include "main.h"

/**
 * print_dec - Prints a decimal number
 * @ap: The va_list containing the decimal number to print
 *
 * Return: The number of characters printed
 */
int print_dec(va_list ap)
{
	int n = va_arg(ap, int);
	int num = n;
	int len = 0;
	int div = 1;

	if (n < 0)
	{
		len += _putchar('-');
		num = -num;
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
