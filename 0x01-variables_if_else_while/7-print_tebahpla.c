#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ai;

	for (ai = 'z'; ai >= 'a'; ai--)
		putchar(ai);
	putchar('\n');
	return (0);
}
