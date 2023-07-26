#include "main.h"
/**
 * strcmp - compares strings
 * @s1: string to be compared
 * @s2: string to be compared second param
 *
 * Return: Returns if string are equal or not.
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
