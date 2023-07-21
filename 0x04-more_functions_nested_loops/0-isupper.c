#include<stdio.h>
/**
 * _isupper - returns 1 if the passed letter is capital
 * @c: character to be checked
 *
 * Return: 1 if letter is upper and 0 otherwise
 *
 */

int _isupper(c)
{
	if (c > 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
