#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_non - Prints characters when an unknown format specifier encountered
 * @num1: The first character to print
 * @num2: The second character to print
 *
 * Return: Always returns 0
 */

int print_non(char num1, char num2)
{
	if (num2  == '%')
	{
		write(1, &num2, 1);
	}
	else
	{
		write(1, &num1, 1);
		write(1, &num2, 1);
	}
	return (0);
}
