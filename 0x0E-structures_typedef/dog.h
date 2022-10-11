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
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
