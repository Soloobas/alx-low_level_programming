#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a password using random characters
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum, n;
	char pass[100];

	sum = 0;
	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78 + '0';
		sum += pass[i];
	}

	n = 2772 - sum;
	pass[i] = n;

	printf("%s", pass);

	return (0);
}
