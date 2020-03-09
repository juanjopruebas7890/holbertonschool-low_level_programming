#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Is the new type
 * Return: On success 1.
 * @name: variable.
 * @age: Variable.
 * @owner: variable.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
