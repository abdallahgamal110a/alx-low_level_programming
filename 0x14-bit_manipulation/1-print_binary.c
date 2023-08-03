#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @i: decimal number to print as binary
 *
 */
void print_binary(unsigned long int i)
{
unsigned long int t;
int s;
if (i == 0)
{
printf("0");
return;
}
for (t = i, s = 0; (t >>= 1) > 0; s++)
;
for (; s >= 0; s--)
{
if ((i >> s) & 1)
printf("1");
else
printf("0");
}
}
