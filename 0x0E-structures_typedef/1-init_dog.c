#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog details;
	struct dog *d = &details;

	details.name = name;
	details.age = age;
	details.owner = owner;
}
