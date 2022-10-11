#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes dog
 * @name:name of the dog
 * @age: age of thr dog
 * @owner: owner of thr dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
