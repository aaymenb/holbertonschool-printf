#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_sp - Struct for format specifiers and
 * their corresponding functions
 * @specifi: The format specifier character
 * ('c' for char, 's' for string)
 * @print_func: Function pointer to
 * the function that prints the corresponding type
 */

typedef struct format_sp
{
	char specifi;
	int (*print_func)(va_list args);
} sp_t;

int print_char(va_list args);
int print_string(va_list args);
int printf(const char *format, ...);
int print_percent(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_non(char num1, char num2);
int print_int(va_list ap);
int print_dec(va_list ap);

#endif
