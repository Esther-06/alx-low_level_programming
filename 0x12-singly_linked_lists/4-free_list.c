#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node.
	 */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
