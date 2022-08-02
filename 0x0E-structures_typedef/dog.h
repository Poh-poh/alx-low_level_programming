#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Define a new type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description - learning about structures
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
