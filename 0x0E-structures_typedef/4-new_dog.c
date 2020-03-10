#include <stdlib.h>
#include "dog.h"
/**
*new_dog - function
*@name: dog name
*@age: dog age
*@owner: dog owner
*Description: funtion
*Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int i;

	/* Asignar espacio de memoria para las copias*/
	dog2 = malloc(sizeof(struct dog));
	if (dog2 == NULL)
		return (NULL);
	/* Contar y asignar memoria para la copia del nombre */
	for (i = 0 ; name[i] != '\0' ; i++)
	{
	}
	(*dog2).name = malloc(sizeof(char) * i + 1);
	/*Validar que no falle*/
	if ((*dog2).name == '\0')
	{
		free(dog2);
		return (NULL);
	}
	/* Contar y asignar memoria para la copia del owner */
	for (i = 0 ; owner[i] != '\0' ; i++)
	{
	}
	(*dog2).owner = malloc(sizeof(char) * i + 1);
	/*Validar que no falle */
	if ((*dog2).owner == '\0')
	{
		free((*dog2).name);
		free(dog2);
		return (NULL);
	}
	/*Crear las copias */
	for (i = 0 ; name[i] != '\0' ; i++)
		(*dog2).name[i] = name[i];
	(*dog2).name[i] = '\0';
	for (i = 0 ; owner[i] != '\0' ; i++)
		(*dog2).owner[i] = owner[i];
	(*dog2).owner[i] = '\0';
	(*dog2).age = age;
	return (dog2);
}
