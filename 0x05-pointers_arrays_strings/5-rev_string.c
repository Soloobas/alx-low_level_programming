#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string 
 * Return: reverses a string
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i; 

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter / 2; i++)
	{
		counter--;
		rev = (i);
		s[i] = s[counter];
		s[counter] = rev;
	}
}
