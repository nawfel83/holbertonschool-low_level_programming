#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure for a dog
* @name: Pointer to a string for dog's name
* @age: Float value for dog's age
* @owner: Pointer to a string for owner's name
* Description: Defines a new struct to store information about a dog,
* including its name, age, and owner.
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
* dog_t - New type name for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
