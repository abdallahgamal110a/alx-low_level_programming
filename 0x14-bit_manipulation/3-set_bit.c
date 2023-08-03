#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at a given index
 * @index: index position to change, starting from 0
 *
 * @n: decimal number passed by pointer
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int t;
if (index > 64)
return (-1);
for (t = 1; index > 0; index--, t *= 2)
;
*n += t;
return (1);
}
