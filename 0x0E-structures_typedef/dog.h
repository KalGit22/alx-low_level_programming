#ifndef _DOG_H_
#define _DOG_H_

/**
 * Struct dog - define a new data type called dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
