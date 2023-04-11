#include <stdlib.h>
#include <time.h>
/**
 * int main - prints random number and indicates whether it's positive, 0, or negative.
 *
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ("n > 0");
	{
		printf("%d is positive",n);
	}

	elif("n == 0");
	{
		printf("%d is zero",n);
	}

	else("n < 0");
	{
		printf("%d is negative",n);
	}
	return (0);
}
