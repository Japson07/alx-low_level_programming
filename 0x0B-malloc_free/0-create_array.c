#include "main.h"
#include <stlib.h>
/**
* *create_array - creates an array of characters and initialises
* it with a specific character
* @size: size of array
* @c: character to initialize array with
* Return: array @b
*/
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		b[i] = c;
	return (b);
}
