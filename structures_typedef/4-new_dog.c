#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: a pointer to the new dog created.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p = NULL;
int sizeName = 0;
int sizeOwner = 0;
p = (dog_t *)malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
if (name == NULL || owner == NULL)
{
free(p);
return (NULL);
}
sizeName = strlen(name) + 1;
sizeOwner = strlen(owner) + 1;
p->name = (char *)malloc(sizeof(char) * sizeName);
if (p->name == NULL)
{
free(p);
return (NULL);
}
strcpy(p->name, name);
p->owner = (char *)malloc(sizeof(char) * sizeOwner);
if (p->owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
strcpy(p->owner, owner);
p->age = age;
return (p);
}
