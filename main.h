#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct matchs - Listes des specifier connus
 * @form: la lettre du specifier
 * @f: le pointeur de fonction
 */
typedef struct matchs
{
	char form;
	int (*f)(va_list args);
} match;

int c_end_s(char *s);
int _count(const char *c);
int _putchar(char c);
int _putstring(char *s);
int _printf(const char *format, ...);
int printchar(va_list args);
int printstring(va_list args);
int printint(va_list args);
int printnum(int num);
int printpercent(va_list args);
int _abs(int n);
#endif /* MAIN_H */
