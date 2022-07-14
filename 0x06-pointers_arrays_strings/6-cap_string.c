#include "main.h"
/**
* *cap_string - capitalise the characters of a string
* @s: string to modify
* Return: s
*/
char *cap_string(char *s)
{
	int i, b;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (s[i] == spe[b])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
