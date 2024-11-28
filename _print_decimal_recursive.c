#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _print_decimal_recursive - recursive function to print a decimal
 * @num: number to print
 * Return: number of digits
 */
int _print_decimal_recursive(int num)
{
	int allchar = 0;

	if (num / 10)
		allchar += _print_decimal_recursive(num / 10);

	_putchar('0' + num % 10);
	allchar++;

	return (allchar);
}
