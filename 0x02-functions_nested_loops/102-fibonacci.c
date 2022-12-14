#include <stdio.h>
/**
 * main - prints fibonacci numbers starting from 1
 * Returns: Always 0 (success)
 */

int main(void)
{
	long first_num = 1;
	long second_num = 2;
	int i;

	for (i = 0; i < 25; i++)
	{
		if (i == 24)
		{
			printf("%li, %li", first_num, second_num);
			continue;
		}
		printf("%li, %li, ", first_num, second_num);
		first_num += second_num;
		second_num += first_num;
	}
	printf("\n");
	return (0);
}
