#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_dlistint - Frees a doubly linked list
* @head: Pointer to the head of the list to be freed
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
