#include "main.h"
/**
 * strncpy - copies a string
 * @dest: destination param
 * @src: source file to be concatenated from.
 * @n: number of bytes to be concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
