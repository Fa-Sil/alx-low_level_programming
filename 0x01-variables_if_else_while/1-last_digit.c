#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = (n % 10);
	printf("Last digit of %d", n);
	if (x > 5)
	{
		printf(" is %d and is greater than 5\n", x);
	}
	else if (x == 0)
	{
		printf(" is %d and is 0\n", x);
	}
	else
	{
		printf(" is %d and is less than 6 and not 0\n", x);
	}
	/* your code goes there */
	return (0);
}
