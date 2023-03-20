#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure for a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: Data structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
