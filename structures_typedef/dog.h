#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for print information of dog.
 *
 *@name: name of the dog.
 *
 *@age: age of the dog.
 *
 *@owner: owner of the dog.
 *
 **/

typedef struct dog

{
char *name;

float age;

char *owner;
} dog;

#endif /* DOG_H */

#ifndef protect
#define protect
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
