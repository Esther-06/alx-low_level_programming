#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @num: number of data in an array
 * @array: array passed in
 */

void print_array(int *array, int num)
{
	int i;

	num = num - 1;
	i - 0;
	{
		if (i == num)
		{
			printf("%d", array[i]);
		}
		else
		{
			printf("%d, ", array[i]);
		}
		i++;
	}
	printf("\n");
}
