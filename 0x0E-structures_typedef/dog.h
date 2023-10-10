#ifndef MYHEADER_H
#define MYHEADER_H
/**
* struct dog - descibe
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
#endif
