#include<stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = (i + 1); j < 10; j++)
		{
			for (k = (j + 1); k < 10; k++)
			{
				printf("%d%d%d", i, j, k);
			}
			printf(", ");
		}
	}
	return (0);
}
