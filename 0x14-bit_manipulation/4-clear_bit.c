#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @index: index position to change
 * @n: pointer to decimal number to change
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int t;
unsigned int H;
if (index > 64)
return (-1);
H = index;
for (t = 1; H > 0; t *= 2, H--)
;
if ((*n >> index) & 1)
*n -= t;
return (1);
}
