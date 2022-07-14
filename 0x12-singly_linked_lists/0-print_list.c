#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - Entry point
 *@h: points to the next node
 *
 *Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");

		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;

	}
	return (nodes);
}
