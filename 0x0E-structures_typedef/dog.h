#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * my_dog - to define a new type struct dog
 */
typedef struct dog my_dog;
/**
 * struct dog - stores the info of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, flaoat age, char *owner);
#endif
