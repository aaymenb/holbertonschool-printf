#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - Prints a character
 * @args: The va_list containing the character to print
 * Return: Always returns 1 to indicate that one character was printed.
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
