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

void print_dog(struct dog *d);

#endif /* DOG_H */
