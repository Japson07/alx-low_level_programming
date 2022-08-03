#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter
 *			on each element of an array
 * @array: array to be executed
 * @size: size of the array
 * @action: pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
