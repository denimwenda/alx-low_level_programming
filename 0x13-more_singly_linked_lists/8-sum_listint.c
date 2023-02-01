#include "lists.h"
/**
 * sum_listint - Calculates the sum of the integers
 * @head: Pointer to the first element
 * Return: An integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
