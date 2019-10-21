#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialize a variable in the struct
*@d: pointer to struct
*@name: pointer to a string
*@age: float
*@owner: pointer to a string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == '\0')
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
