#include "main.h"
/**
 * _islower - prints the alphabet in lowercase
 * @alpha: number or an alphabet
 * Return: Always 0 (Success)
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
