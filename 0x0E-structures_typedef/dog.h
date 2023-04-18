#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - initialize a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: print the contents of a struct dog to stdout
 */
void print_dog(struct dog *d);

/**
 * new_dog - create a new struct dog
 * @name: name to assign to the new dog
 * @age: age to assign to the new dog
 * @owner: owner to assign to the new dog
 *
 * Return: pointer to the new struct dog, or NULL if memory allocation fails
 *
 * Description: create a new struct dog and initialize its fields with the
 * provided values
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - free memory allocated for a struct dog
 * @d: pointer to the struct dog to free
 *
 * Description: free the memory allocated for a struct dog, including the
 * memory allocated for its name and owner fields
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copy a string to a buffer
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to the destination buffer
 *
 * Description: copy the string pointed to by src to the buffer pointed to by
 * dest, including the terminating null byte
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 *
 * Description: calculate the length of the string pointed to by
 * the terminating null byte
 */
int _strlen(char *s);

#endif

