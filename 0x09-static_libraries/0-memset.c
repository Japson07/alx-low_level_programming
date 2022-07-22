#include "main.h"
/**
* *_memset - memory filled with a constant byte
* @s: pointer
* @b: constant byte
* @n: size of buffer to fill
* Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
