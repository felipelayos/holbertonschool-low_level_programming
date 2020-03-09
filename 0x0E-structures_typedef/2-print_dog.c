/**
*print_dog - function
*@d: structure
* Description - Print the information of the dog
*/
#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if ((*d).name)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", (*d).age);

	if ((*d).owner)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
}
