#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: name of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	/*return 0 as number of nodes*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	/*go to the next node*/
	h = h->next;
	/*count number of nodes*/
	node_count += 1;
	}

	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}

