#include "main.h"

/**
 * _printf - Our custom printf function to format and print data
 *
 * @format: The format string containing the characters and format specifiers
 *
 * Return: The number of characters printed or -1 if the format string is NULL
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, char_count = 0;
	int (*func)(va_list) = NULL;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[index])
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			index++;
			char_count++;
			continue;
		}
		index++;	/* Move to the next character after '%' */
		/* Get the print function for the next format specifier */
		func = get_print_func(&format[index]);
		if (func != NULL)	/* If a valid print function is found */
			char_count += func(args);	/* Call print function with variable arguments */
		else
		{
			if (format[index] == '\0') /* If next character is '\0', return -1 */
				return (-1);
			if (format[index] == '%') /* If next character is '%' */
				char_count += _putchar('%'); /* print a single '%' */
			else /* If next char is not '%' */
			{
				char_count += _putchar('%'); /* print '%' */
				char_count += _putchar(format[index]); /* and then the next character */
			}
		}
		index++;
	}
	va_end(args);
	return (char_count);
}
