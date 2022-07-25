#include "maain.h"
#include <stdlib.h>
/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: secomd string
* Return: NULL if failed
*/
char *str_concat(char *s1, char *s2)
{
	int a = 0, int b = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find length of s1 and s2*/
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	/* +1 to knkw the end of string character */
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));
	if (s == NULL)
		return (NULL);
	/* add first string to array */
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	/* add second array */
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	/* terminate new string */
	s[i] = '\0';
	return (s);
}
