#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_int - print a int.
 * @args: arguments.
 *
 * Return: 1
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len3 = 0, temp = n, digits[12];
	int i = 0, j;

	if (n == INT_MIN)
	{
		char int_min_str[] = "-2147483648";

		for (j = 0; int_min_str[j] != '\0'; j++)
		{
			_putchar(int_min_str[j]);
		}
		return (11);
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len3++;
	}
	while (temp != 0)
	{
		temp /= 10;
		len3++;
	}
	while (n != 0)
	{
		digits[i++] = n % 10;
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}
	return (len3);
}
