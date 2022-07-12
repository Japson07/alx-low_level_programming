#include "main.h"
#include <string.h>
/**
* _strlen - length of string
* @s: pointer of string
* Return: void
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
