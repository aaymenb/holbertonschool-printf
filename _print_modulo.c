#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_modulo - print a %
 * @args: arguments
 * Return: 1
 */
int _print_modulo(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
