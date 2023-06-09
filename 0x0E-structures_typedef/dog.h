#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A function to define dog's elements
 * @name: Type = char * Name of dog
 * @age: Type = float Age of dog
 * @owner: Type = char * Owner of dog
 * Description: A function to define a dog's elements
 *
 * Return: Always 0;
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog;
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
