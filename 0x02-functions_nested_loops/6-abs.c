#include "main.h"

/**
 * _abs - Computes the absolute value of an inter.
 * @c: The number to be computed.
 *
 * REturn: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	else
	{
		return (c);
	}
}
