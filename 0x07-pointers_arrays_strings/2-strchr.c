#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: string
* @c: character
* Return: a pointer to the first occurrence of the character
* or null if its not present
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
