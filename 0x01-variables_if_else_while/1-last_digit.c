#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print a text according number
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d amd 0\n", n, lastd);
	}
	else if (lastd < 0 && lastd != 0)
	{
		printf("last digit of %d is %d and is less than 0\n", n, lastd);
	}
	return (0);
}
