#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_string - Prints a string
 * @args: The va_list containing the string to print
 * Return: The number of characters printed, or 0 if the string is NULL.
 */

int print_string(va_list args)
{
	int count = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	while (s[count])
	{
		_putchar(s[count++]);
	}

	return (count);
}
