#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @args: The va_list (not used)
 * Return: Always returns 1 to indicate that one character was printed.
 */

int print_percent(va_list args)
{
	(void) args;
	_putchar('%');

	return (1);
}
