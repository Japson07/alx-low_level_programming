#include "main.h"

/**
* _strlen - length of string
* @s: pointer of string

* Return: Length
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
