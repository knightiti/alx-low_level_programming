#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a structure that defines the name, age and owner of a dog
 */

typedef struct dog
{
char* name;
float age;
char* owner;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
}
#endif /*DOG_H*/
