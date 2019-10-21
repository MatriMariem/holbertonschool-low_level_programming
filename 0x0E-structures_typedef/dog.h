#ifndef DOG_H
#define DOG_H
/**
* struct dog - Each dog has the following
*@name: name of dog
*@age: age of dog
*@owner: owner name
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif
