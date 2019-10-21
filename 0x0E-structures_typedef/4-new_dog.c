#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*new_dog - creates a new dog
*@name: pointer to a string
*@age: float
*@owner: pointer to a string
* Return: pointer to a variable
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == '\0')
{
return (0);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
