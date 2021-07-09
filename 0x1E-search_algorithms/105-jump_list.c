#include "search_algos.h"
#include <math.h>

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	// size_t end = sqrt(size), 
	size_t start, i = 1;
	listint_t *temp = list;
	if (list == NULL || size == 0)
		return NULL;
	while(list != NULL && list->next != NULL)
	{
		printf("%d-----%zu\n",  list->n, i);
		printf("%p-----%p\n",  (void*)(list), (void *)(list)->(&(next[2])));

		list = &(list)->next[0];
		i = i * 2;
		
	}
		return list;
	(void)temp;
	(void)size;
	// (void)end;
	(void)i;
	(void)start;
	(void)value;
}
