#include"main.h"
/**
* clear_bit - set the value of a bit to 0 at a given index
* @index: index position to change
* @n: pointer to decimal number to change
* Return: 1 if it worked, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

if (*n = *n & ~(1ul << index))
{
return (1);
}
}
