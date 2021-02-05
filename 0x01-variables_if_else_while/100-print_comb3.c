#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0
 **/
int main(void)
{
	int n, n2, c;

	for (n = 0; n <= 9; n++)
	{
		for (n2 = (n + 1); n2 <= 9; n2++)
		{
			putchar(n + '0');
			putchar(n2 + '0');
			c++;
			if (c < 45)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
