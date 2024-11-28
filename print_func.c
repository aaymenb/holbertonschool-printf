#include "main.h"

/**
 * print_char - Prints a character
 * @args: list of arguments containing the character to be printed
 * Return: Number of characters printed (always 1 for a single char)
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1); /* Since it's a single character */
}

/**
 * print_percent - Prints the percent symbol '%'
 * @args: List of arguments, not used in this function
 * Return: Number of characters printed (always 1 for '%')
 */
int print_percent(va_list args)
{
	(void)args; /* Cast args to void to avoid unused variable warning */
	_putchar('%');
	return (1);
}

/**
 * print_binary - Converts a decimal number to binary.
 * @args: A va_list pointing to the argument to be converted.
 * Description: Converts a decimal number to binary by performing
 *              repeated division by 2 and storing the remainder.
 *              The binary number is then constructed from these remainders.
 * Return: The length of the binary number.
 */

int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int binary_digits[1024], j, index = 0, count = 0;

	/* Handle 0 explicitly as its binary is 0 */
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	/* Construct the binary in reverse */
	while (number > 0)
	{
		binary_digits[index++] = number % 2;
		number /= 2;
	}

	/* Print the binary number in the correct order */
	for (j = index - 1; j >= 0; j--)
	{
		_putchar(binary_digits[j] + '0');
		count++;
	}

	return (count); /* Return the number of digits in the binary representation */
}
