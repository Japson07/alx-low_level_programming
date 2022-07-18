#include "main.h"
/**
* *_memcpy - copies from memory area to another memory area
* @dest: destination memory area
* @src: source memory area
* @n: number of bytes tobve copied
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
