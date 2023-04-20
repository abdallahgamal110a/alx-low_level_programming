#include <stdlib.h>
#include "function_pointers.h"
/**
 * Array_iterator - executes a function given as a parameter
 *
 * On each element of an array
 *
 * @array: Array to iterate over
 *
 * @size: Size of the array
 *
 * @action: Pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int m;
if (!array || !action)
return;
for (m = 0; m < size; m++)
action(array[m]);
}
