#include <stdio.h>

/**
 * main - Prints single digit numbers starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; j <= 9; i++)
	{
		if (j > i)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

