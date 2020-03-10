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
        int i = 0;

        dog2 = malloc(sizeof(struct dog));
        while (name[i])
                i++;
        (*dog2).name = malloc(sizeof(char) * i + 1);
        if ((*dog2).name == 0)
        {
                free(dog2);
                return (0);
        }
        i = 0;
        while (owner[i])
                i++;
        (*dog2).owner = malloc(sizeof(char) * i + 1);
        if ((*dog2).owner == 0)
        {
                free((*dog2).name);
                free(dog2);
                return (0);
        }
        for (i = 0 ; name[i] != 0 ; i++)
                (*dog2).name[i] = name[i];
        (*dog2).name[i] = name[i];
        for (i = 0 ; owner[i] != 0 ; i++)
                (*dog2).owner[i] = owner[i];
        (*dog2).owner[i] = owner[i];
        (*dog2).age = age;
        return (dog2);
}
