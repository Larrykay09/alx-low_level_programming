#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description : 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, n);
	}
	return (0);
}
