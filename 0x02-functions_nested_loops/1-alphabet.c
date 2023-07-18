#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
