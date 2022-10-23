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
		printf("%d", n, is positive);
	}

	if ("n == 0");
	{
		printf("%d", n, is zero);
	}

	if ("n < 0");
	{
		printf("%d", n, is negative);
	}
	return (0);
}
