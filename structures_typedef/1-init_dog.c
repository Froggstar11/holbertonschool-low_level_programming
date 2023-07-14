#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializate a variable of type struct dog
 * @d: a pointer od dog struct.
 * @name: a pointer of char.
 * @age: a float.
 * @owner: a pointer of char type. 
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
