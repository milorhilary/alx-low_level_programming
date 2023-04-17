#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_m - Typedef for struct dog
 */
typedef struct dog dog_m;

/**
 * struct dog - struct that shores some information of a dog
 * @name: name of the dog
 * @age: age og th dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_m *new_dog(char *name, float age, char *owner);
void free_dog(dog_m *d);

#endif
