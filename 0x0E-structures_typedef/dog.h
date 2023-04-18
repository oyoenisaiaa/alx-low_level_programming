#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure new type
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: the age of the dog
 */

struct dog
{
char *name;
char *owner;
float age;
};

/**
 * dog_t - a new type dog_t to replace struct
 * defining a new type dog_t as a new name for the type struct dog
 */

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
