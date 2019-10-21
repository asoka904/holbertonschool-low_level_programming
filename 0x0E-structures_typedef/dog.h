#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - This structure define the main characteristics of a dog
 * @name: name of the dog
 * @age: actually age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
int _strlen(char *s);
#endif

