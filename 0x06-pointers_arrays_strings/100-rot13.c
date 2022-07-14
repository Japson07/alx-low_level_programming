#include "main.h"
/**
* *rot13 - encode a string by using rot13
* @s: functional parameter
*Return: s
*/
char *rot13(char *s)
{

	char store;
	char *r = s
		while (*s)
		{
			store = (*s & 32) + 65;
			if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			{
				*s = (*s - store + 13) % 26 + store;
			}
			s++;
		}
	return (s);
}
