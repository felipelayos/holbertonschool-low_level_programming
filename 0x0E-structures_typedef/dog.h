#ifndef HOLBERTON
#define HOLBERTON

/**
 * struct dog - dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Description: description
 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

typedef struct dog dog_t;

int _putchar(char c);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
