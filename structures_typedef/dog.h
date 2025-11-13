#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my struct for my dog poppy :3
 * @name: name of the dog
 * @owner: owner of poppy
 * @age: age of poppy
 *
 * Description: Define a new type struct dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
