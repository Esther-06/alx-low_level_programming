#include "main.h"
/**
 * _isalpha - check for an alphabet letter
 * @value: value for consideration
 * Return: returns 1 if successful 0 if otherwise
 */

int _isalpha(int value)
{
	if ((value >= 'a' || value >= 'A') && (value <= 'z' || value <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
