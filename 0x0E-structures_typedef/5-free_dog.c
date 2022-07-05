#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free allocated memory
 * @d: array
 * Description: free memory allocated to struct
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
