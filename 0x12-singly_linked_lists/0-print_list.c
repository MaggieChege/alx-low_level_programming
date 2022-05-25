#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints to standard output
 * @h: A node in list_t
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter;
	const list_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] ", ptr->len);
			printf("%s\n", ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
