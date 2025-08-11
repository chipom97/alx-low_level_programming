#ifndef POPPY
#define POPPY

/**
 * struct dog - a dog's basic info
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Alias struct dog to dog_t */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
