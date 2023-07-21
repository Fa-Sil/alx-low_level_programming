#include<stdio.h>
/*
 * _isupper(c) - returns 1 if the passed letter is 1
 *
 * Return: 1 if letter is upper and 0 otherwise
 *
 */

int _isupper(c)
{
	if(c > 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
