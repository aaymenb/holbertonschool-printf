#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_format - Finds the corresponding function for a given format specifier
 * @format: The format specifier to match
 *
 * Return: A pointer to the corresponding functionor NULL if no match is found
 */

static int (*print_format(const char *format))(va_list)
{
	int jindex = 0;

	sp_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_dec},
		{'i', print_int},
		{'\0', NULL}

	};

	while (specifiers[jindex].specifi)
	{
		if (specifiers[jindex].specifi == *format)
		{
			return (specifiers[jindex].print_func);
		}
		jindex++;
	}

	return (NULL);
}

/**
 * _printf - Custom implementation of printf function
 * @format: The format string containing format specifiers
 * @...: The values to format and print
 *  Return: The total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;
	int count = 0;
	int (*print_func)(va_list);

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				return (-1);
			}

			print_func = print_format(&format[index]);
			if (print_func)
			{
				count = count + print_func(args);
			}
			else
			{
				count = count + print_non('%', format[index]);
			}
		}
		else
			count = count + write(1, &format[index], 1);

		index++;
	}
	va_end(args);
	return (count);
}
