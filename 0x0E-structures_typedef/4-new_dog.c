#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * New_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Struct dog
 * If fails, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int name_len, owner_len;
if (name == NULL || owner == NULL)
return (NULL);
/*Aallocate memory for struct */
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
/* Get length of name and owner */
name_len = strlen(name);
owner_len = strlen(owner);
/* Allocate memory for name */
d->name = malloc(name_len + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
/* Copy name to allocated memory */
strcpy(d->name, name);
/* Allocate memory for owner */
d->owner = malloc(owner_len + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
/* Copy owner to allocated memory */
strcpy(d->owner, owner);
/* Set age */
d->age = age;
return (d);
}
