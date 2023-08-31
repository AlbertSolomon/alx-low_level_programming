#include "main.h"

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: pointer to the provided prompt, to be converted
 * Return: converted number of unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int val = 0, j;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[val] != '\0')
		val++;
	val -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);

		if (b[j] == '1')
			number += (1 * (1 << val));
		j++;

		val--;
	}
	return (number);
}
