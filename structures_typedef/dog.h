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
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
