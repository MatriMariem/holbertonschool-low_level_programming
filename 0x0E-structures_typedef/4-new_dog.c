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
d->name = malloc(sizeof(char) * (_strlen(name) + 1));
d->age = age;
d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
return (d);
}
#include "dog.h"
/**
* _strlen - it gives the length of a string
*@s: pointer to a string
* Return: the length of string
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
