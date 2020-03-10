#include <stdlib.h>
#include "dog.h"
/**
*free_dog - function
*@d: parm
*Description: func
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
