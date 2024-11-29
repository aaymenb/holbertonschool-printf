## Our files :
_printf.c: The main attraction! Implements _printf that outputs formatted text.  
// _printf.c : Le fichier principal ! Implémente la fonction _printf qui affiche du texte formaté.

_putchar.c: Our helper to write characters to stdout.  
// _putchar.c : Notre aide pour écrire des caractères sur la sortie standard (stdout).

main.h: The header file with all the function prototypes for _printf.  
// main.h : Le fichier d'en-tête contenant tous les prototypes de fonctions pour _printf.

print_id.c print_int.c print_deci.c print_s.c print_c.c print_purcent.c: The core functions handling specifiers c, s, %, d and i.  
// print_id.c, print_int.c, print_deci.c, print_s.c, print_c.c, print_purcent.c : Les fonctions principales qui gèrent les spécificateurs c, s, %, d et i. Ces fichiers sont responsables de l'affichage des différents types de données formatées.

selection.c: Plays matchmaker, linking format specifiers to their respective functions.  
// selection.c : Joue le rôle de "metteur en relation", liant les spécificateurs de format à leurs fonctions respectives.

man_3_printf: The manual page  
// man_3_printf : La page de manuel qui décrit l'utilisation de la fonction _printf (man 3 printf dans un terminal).
______________________________________________________________________________________________
## For compilation :
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
______________________________________________________________________________________________
## The following table lists the format specifiers supported:

Specifier	Description
%c	Print a character.
%s	Print a string.
%%	Print a percent sign.
%i	Print an integer.
______________________________________________________________________________________________

## Explanation of each file

_printf.c: Implements the _printf function that displays formatted text.  
// _printf.c : Implémente la fonction _printf qui affiche du texte formaté.

_putchar.c: A helper function to write characters to the standard output (stdout).  
// _putchar.c : Une fonction d'aide pour écrire des caractères sur la sortie standard (stdout).

main.h: The header file containing all the function prototypes needed for _printf.  
// main.h : Le fichier d'en-tête contenant tous les prototypes de fonctions nécessaires pour _printf.

print_id.c, print_int.c, print_deci.c, print_s.c, print_c.c, print_purcent.c: Core functions responsible for handling specifiers like c, s, %, d, and i.  
// print_id.c, print_int.c, print_deci.c, print_s.c, print_c.c, print_purcent.c : Les fonctions principales qui gèrent les spécificateurs comme c, s, %, d et i.

selection.c: The "matchmaker", responsible for linking format specifiers to their corresponding functions.  
// selection.c : Le "metteur en relation", responsable de l'association des spécificateurs de format à leurs fonctions correspondantes.

man_3_printf: The manual page. You can access it by typing `man ./man_3_printf` in your terminal.  
// man_3_printf : La page de manuel. Vous pouvez y accéder en tapant `man ./man_3_printf` dans votre terminal.

