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
		for (j = i; j <= 10; j++)
		{
			if (i < j)
				break;
			for (k = j; k <= 10; k++)
			{
				if (j < k)
					break;
				printf("%d%d%d, ", i, j, k);
			}
		}
	}
	return (0);
}
