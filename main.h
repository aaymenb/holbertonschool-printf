#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 *  Formats de structure - structure qui stocke different types
 *  que _printf peut imprimer et leur fonction respective
 *  Define type and args in separate lines
 *  @type: le type du format (ex: 'c', 's')
 *  @f: la fonction qui imprimera le type associé
 */
typedef struct formats
{
	char type;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_modulo(va_list args);
int print_string(va_list args);
int _print_decimal_recursive(int num);
int _print_decimal(va_list args);
#endif

