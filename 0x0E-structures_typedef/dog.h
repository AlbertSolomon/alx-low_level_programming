#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - description for a pet
 * @name: pet name
 * @age: pet age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
