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

struct dog
{
char* name;
float age;
char* owner;
};
int main(void)
{
struct dog my_dog;
my_dog.name = "poppy";
my_dog.age = "3.5";
my_dog.owner = "Bob";
return 0;
}
#endif /*DOG_H*/
