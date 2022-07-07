#include "main.h"

/**
* _isdigit - checks if its a digit
* @c: integer to be tested
* Return: 1 if its a digit and 0 if it is not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
