#include "main.h"
/**
 * int _strlen - returns length of the string
 * @s: parameter String
 * Return: returns length integer
 */
int _strlen(char *s)
{
	String x = &s;
	
	return (strlen(x));
}
