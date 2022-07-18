#include "lists.h"
/**
 * print_listint - writes all elements of a linked list to stdout
 * @h: A linked list of type listint_t to write to stdout
 * Return: Total number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t tot = 0;
while (h)
{
printf("%d\n", h->n);
tot++;
h = h->next;
}
return (tot);
}
