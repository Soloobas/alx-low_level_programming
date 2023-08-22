#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: second half of the string
 */
void puts_half(char *str)
{
	int a, n, lengthi;

	lengthi = 0;

	for (a = 0; str[a] != '\0'; a++)
		lengthi++;

	n = lengthi / 2;

	if ((lengthi % 2) == 1)
		n = (lengthi + 1) / 2;

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
