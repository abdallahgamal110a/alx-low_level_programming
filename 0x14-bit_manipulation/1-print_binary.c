#include"main.h"
/**
* print_binary - print binary representation of a number
*
* @n: decimal number to print as binary
*/
void print_binary(unsigned long int n)
{
char a = '0';
unsigned long int len = 1ul << 63;

while (!(len & n) && len != 0)
len = len >> 1;

if (len == 0)
write(1, &a, 1);

while (len)
{
if (len & n)
a = '1';
else
a = '0';
write(1, &a, 1);
len = len >> 1;
}
}
