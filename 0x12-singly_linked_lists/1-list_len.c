#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: singly linked list
 * Return: num of elem in the list
 */
size_t list_len(const list_t *h)
{
size_t numelm = 0;
while (h != NULL)
{
h = h->next;
numelm++;
}
return (numelm);
}
