#include "main.h"
/**
* *_strncat - concatenate two strings
* @dest: string dest
* @src: string src
* @n: number of bytes for src not to be nullified
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
