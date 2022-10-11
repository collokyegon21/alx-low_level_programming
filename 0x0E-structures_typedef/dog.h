#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
* dog_t - Typedef for struct dog
*/

typedef struct dog dog_t;

/**
* struct dog - structure of the dog
* @name: string character of the dog
* @age:integer
* @owner:string character
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* DOG_H */
