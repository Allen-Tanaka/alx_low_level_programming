#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 *
 * @d: struct
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		(d->owner = "(nil)";
	printf("Name: %s\n Owner: %s\n", d->name, d->owner);
}
