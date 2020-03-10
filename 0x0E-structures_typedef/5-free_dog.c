/**
*free_dog - function
*@d: parm
*Description: func
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free((*d));
	}
}
