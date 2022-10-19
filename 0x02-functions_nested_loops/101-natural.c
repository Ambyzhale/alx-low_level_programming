#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 and 5 upto 102
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	int z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}
	printf("%d\n", z);
	return (0);
}
