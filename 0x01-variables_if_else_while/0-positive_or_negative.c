#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to int n everytime
 *it executes, and prints it
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is_positive", n);

	if (n < 0)
		printf("%d is_negative\n", n);

	if (n == 0)
		printf("%d is_zero\n", n);

	return (0);
}
