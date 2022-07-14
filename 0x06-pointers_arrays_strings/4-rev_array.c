#include "main.h"
/**
* reverse_array - reverse the contents of an array
* @a: array
* @n: number of elements
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, j, d;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		d = a[i];
		a[i] = a[j];
		a[j--] = d;
	}
}
