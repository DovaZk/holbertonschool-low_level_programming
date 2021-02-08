#include "holberton.h"
/**
 * print_alphabet_x10 - prints x10 alphabet
 *
 *
 * _putchar - prints alphabet in screen
 */
void print_alphabet_x10(void)
{
	char a, t;

	for (a = 0; a <= 9; a++)
{
	for (t = 'a'; t <= 'z'; t++)
{
	_putchar(t);
}
	_putchar('\n');
}
}
