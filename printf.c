#include "main.h"

/**
 * helper_format - Helper function to format and print specific types
 * @format: The type specifier character
 * @args: The variadic arguments
 * @printer: The array of PrintType_t structures
 * Return: Number of bytes written for the specific type
 */
int helper_format(const char **format, va_list args, PrintType_t printer[])
{
	int writtenBytes = 0, j = 0;

	for (j = 0; printer[j].type != NULL; j++)
	{
		if (*printer[j].type == **format)
		{
			writtenBytes += printer[j].print_type_function(args);
			return (writtenBytes);
		}
	}

	_putchar('%');
	_putchar(**format);
	writtenBytes += 2;

	return (writtenBytes);
}

/**
 * process_percent - Process the double percent (%%) format specifier
 * @writtenBytes: Pointer to the count of written bytes
 */
void process_percent(int *writtenBytes)
{
	_putchar('%');
	(*writtenBytes)++;
}

/**
 * process_format - Process the format string and print formatted output
 * @format: The format string
 * @args: The variadic arguments
 * @printer: The array of PrintType_t structures
 * Return: Number of bytes written for the entire formatted output
 */
int process_format(const char *format, va_list args, PrintType_t printer[])
{
	int writtenBytes = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				process_percent(&writtenBytes);
			}
			else if (*format == '\0')
			{
				return (-1);
			}
			else
			{
				writtenBytes += helper_format(&format, args, printer);
			}
		}
		else
		{
			_putchar(*format);
			writtenBytes++;
		}
		format++;
	}

	return (writtenBytes);
}

/**
 * _printf - Format a string and print it in the console
 * @format: The string formatted with variadic arguments
 * @...: The variadic arguments
 * Return: Number of bytes printed in the console
 * without the null byte.
 */
int _printf(const char *format, ...)
{
	int writtenBytes = 0;
	va_list args;
	PrintType_t printer[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{NULL, NULL}};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	writtenBytes = process_format(format, args, printer);
	va_end(args);

	return (writtenBytes);
}
