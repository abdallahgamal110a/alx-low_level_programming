#include "main.h"
/**
* set_bit - sets value of a bit to 1 at a given index
*
* @index: index position to change, starting from 0
* @n: decimal number passed by pointer
* Return: 1 if it worked, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
if (*n & (1ul << index))
return (1);

*n = *n | (1ul << index);
return (1);
}
