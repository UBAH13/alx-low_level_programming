#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function determinds to find last digit of random number of n
 * description: to find last digit of random number of n
 *
 * Return: 0
 */

int main(void)
{
	int n, lastDigit;

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
	{
		printf(" and is greater 5\n");
	}
	if (lastDigit == 0)
	{
		printf(" and is 0\n ");
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
