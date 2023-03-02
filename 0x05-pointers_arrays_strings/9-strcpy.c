#include "main.h"

/**
 * char *_strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{

	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	for ( ; x < i ; x++)
	{
	dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
