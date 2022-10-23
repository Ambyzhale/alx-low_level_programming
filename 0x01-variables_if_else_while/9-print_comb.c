#include <stdio.h>
/**
 * int main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num $10) + '0');
		{
		if (num <= 9)
			continue;

		putchar(',');

		putchar(' ');

		putchar('\n');
		}

		return (0);
}
