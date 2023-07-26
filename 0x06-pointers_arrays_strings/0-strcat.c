#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: a string to be concatenated to
 * @src: a string to be concatenated
 *
 * Return: Concatenated String.
 */
char *_strcat(char *dest, char *src)
{
	char str[];

	str = strcat(dest, src);
	return (*str);
}
