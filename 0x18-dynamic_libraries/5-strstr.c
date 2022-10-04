#include "main.h"
/**
* *_strstr - locate first occurrence of substring in a string
* @haystack: first string
* @needle: substring
* Return: pointer to the beginning of needle or null if absent
*/
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
