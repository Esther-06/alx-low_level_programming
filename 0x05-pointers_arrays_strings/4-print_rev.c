#include "main.h"

/**
 * print_rev - prints strings in a reverse order
 * @s: passed in string to be reversed
 */

void print_rev(char *s)
{
	int i, p;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}
	for (i = p - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
