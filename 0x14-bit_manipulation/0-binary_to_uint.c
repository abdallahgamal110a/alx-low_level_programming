#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @i: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *i)
{
unsigned int t, p;
int l;
if (i == NULL)
return (0);
for (l = 0; i[l]; l++)
{
if (i[l] != '0' && i[l] != '1')
return (0);
}
for (p = 1, t = 0, l--; l >= 0; l--, p *= 2)
{
if (i[l] == '1')
t += p;
}
return (t);
}
