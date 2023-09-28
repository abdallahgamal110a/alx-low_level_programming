#include"main.h"
/**
 *_puts_recursion -  function that prints a string
 * @s: pionter to char
 * Return: Nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
