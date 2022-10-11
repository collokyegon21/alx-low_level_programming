#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - structure of the dog
* @name: string character of the dog
* @age:integer
* @owner:string character
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
