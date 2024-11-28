<<<<<<< HEAD
#include "main.h"

/**
 * _printf - produces output with printf command
 * @format: what we want to print
 * Return: number of characters printed withput null terminator
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int length = 0;
	/*chars to be printed*/

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format != NULL && format[i] != '\0')
	{
		/**
		 * is it a format specifier ???
		 */
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			length += selection(args, format[i + 1]);
			i += 2;
		}
		else

		{
			length += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
=======
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Implémentation simplifiée de printf.
 * @format: La chaîne de format contenant les spécificateurs.
 *
 * Return: Le nombre de caractères imprimés.
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count = 0; /* Compteur des caractères imprimés */
	int i, j; /* Déclarer les variables i et j avant les boucles */

	/* Initialiser la liste d'arguments */
	va_start(args, format);

	/* Parcourir la chaîne de format */
	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			/* Si on trouve un '%', on regarde ce qui suit */
			i++; /* Passer au caractère suivant */

			if (format[i] == 'c') {
				/* Spécificateur pour un caractère */
				char c = va_arg(args, int); /* Récupérer le caractère */
				write(1, &c, 1); /* Imprimer le caractère */
				count++; /* Augmenter le compteur */
			}
			else if (format[i] == 's') {
				/* Spécificateur pour une chaîne de caractères */
				char *str = va_arg(args, char*);

				/* Si la chaîne est NULL, afficher "(null)" */
				if (str == NULL) {
					str = "(null)";
				}

				/* Imprimer la chaîne caractère par caractère */
				for (j = 0; str[j] != '\0'; j++) {
					write(1, &str[j], 1);
					count++; /* Compter les caractères */
				}
			}
			else if (format[i] == '%') {
				/* Si on trouve '%%', afficher un '%' littéral */
				write(1, "%", 1);
				count++; /* Compter le caractère '%' */
			}
		}
		else {
			/* Si ce n'est pas un '%', on imprime le caractère tel quel */
			write(1, &format[i], 1);
			count++; /* Compter les caractères */
		}
	}

	/* Nettoyer la liste d'arguments */
	va_end(args);

	/* Retourner le nombre de caractères imprimés */
	return (count);
>>>>>>> refs/remotes/origin/main
}

