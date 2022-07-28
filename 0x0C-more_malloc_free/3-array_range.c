#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array ordered from min to max
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL if malloc fails,or pointer to new array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
