#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: string to be checked
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int counter = 0;

	for (; *s++;)
		counter++;
	return (counter);
}
