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
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
