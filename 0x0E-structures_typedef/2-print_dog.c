#include "dog.h"

/**
 * print_dog - unction that prints a struct dog
 * @d: pointer to the struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6\n", d->age ? d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
