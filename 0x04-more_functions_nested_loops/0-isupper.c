#include "main.h"

/**
* _isupper - check for upper case character
* @c: integer to be used for the function
* Return: 1 if upper case but 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
