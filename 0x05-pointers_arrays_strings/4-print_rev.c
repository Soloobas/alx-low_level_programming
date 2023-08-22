#include "main.h"

/**
 * print_rev - a function that prints a string in reverse, followed by a new line
 * @s: input string
 */
void print_rev(char *s)
{
	int lengthi = 0;
	int o;

	while (s[lengthi] != '\0')
		lengthi++;

	s--;

	for (o = lengthi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
