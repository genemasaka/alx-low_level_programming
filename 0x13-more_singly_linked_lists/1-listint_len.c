#include "lists.h"
/**
 * listint_len - prints the length of linked list
 * @h: A linked list of type listint_t to look through
 * Return: the total number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t tot = 0;
while (h)
{
tot++;
h = h->next;
}
return (tot);
}
