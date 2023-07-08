#include "main.h"
/**
* get_endianness - check endianness
*
* Return: 0 if big endian, or 1 if little endian
*/
int get_endianness(void)
{
unsigned int Q = 1;

char *S = (char *)&i;

if (*S)
return (1);
else
return (0);
}
