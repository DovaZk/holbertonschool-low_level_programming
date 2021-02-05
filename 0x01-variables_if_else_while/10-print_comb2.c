#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0
 **/
int main(void)
{
	int n, n2, s;

	for (n = 0; n <= 9; n++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			putchar(n + '0');
			putchar(n2 + '0');
			if (s < 99)
			{
				putchar(',');
				putchar(' ');
			}
			s++;
		}
	}
	putchar('\n');
	return (0);
}
