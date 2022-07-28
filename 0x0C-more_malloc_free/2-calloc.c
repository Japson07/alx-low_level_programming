#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: numberbof elements
 * @size: byte size of each element in the array
 * Return: NULL if function fails, or pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);
}
