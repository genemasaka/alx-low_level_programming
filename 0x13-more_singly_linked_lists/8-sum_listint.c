#include "lists.h"
/**
 * sum_listint - determines the sum of data in a linked list
 * @head: the first node in a linked list
 * Return: sum of data in linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
