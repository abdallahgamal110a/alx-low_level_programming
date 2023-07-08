#include"main.h"
/**
* flip_bits - flip bits to convert one number to another number
* @m: second number to convert to
* @n: first number
* Return: number of bits that was needed to flip
*
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;

while (n != 0 || m != 0)
{
if ((n & 1) != (m & 1))
	num++;
m = m >> 1;
n = n >> 1;
}

return (num);
}
