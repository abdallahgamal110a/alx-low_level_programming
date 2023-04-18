#ifndef Dog_H
#define Dog_H

/**
 * Struct dog - a dog's basic info
 * @name : First member
 * @age : Second member
 * @owner : Third member
 * Description : longer description
 */
 typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
/* Prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
/* Helper */
char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);

#endif
