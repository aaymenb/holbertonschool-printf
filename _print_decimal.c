#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_decimal - connect print decimal à print recurcive
 * @r - print_decimal_recursive
 * Return: r
 */

int _print_decimal(va_list args)
{
	int i = va_arg(args,int);
	int r = 0;

	if ( i < 0)
	{
		_putchar('-');
		i = -i;
		r++;
	}

	r += _print_decimal_recursive(i);


        return (r);
}
