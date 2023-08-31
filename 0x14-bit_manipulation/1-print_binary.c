#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: pointer to the provided prompt containing binary number
 *
 * Return: the number that had been converted
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int decimal_val = 0;

	if (!b)
		return (0);
	for (int n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);

		decimal_val = 2 * decimal_val + (b[n] - '0');
	}
	return (decimal_val);
}
