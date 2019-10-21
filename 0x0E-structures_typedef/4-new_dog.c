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
int i;
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == '\0' || name == '\0' || owner == '\0')
{
return (0);
}
d->name = malloc(sizeof(char) * (_strlen(name) + 1));
d->age = age;
d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (d->name == '\0' || d->owner == '\0')
{
free(d->name);
free(d->owner);
free(d);
return (0);
}
for (i = 0; name[i]; i++)
{
d->name[i] = name[i];
}
d->name[i] = '\0';
for (i = 0; owner[i]; i++)
{
d->owner[i] = owner[i];
}
d->owner[i] = '\0';
return (d);
}
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
