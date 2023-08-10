#include "lists.h"

/**
 * check_cycle - a code to checks if linked list contains cycle
 * @list: linked list
 * Return: 1 if it has cycle, 0 if it didn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
