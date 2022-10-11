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
}

/**
* dog_t - Typedef for struct dog
*/

/* typedef struct dog dog_t; */

#endif /* DOG_H */
