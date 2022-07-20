#include "main.h"
/**
* sqrtchecker - compures square root recursively
* @first: initial number
* @last: final number
* @m: given number
* Return: 1 if square root not found
*/
int sqrtchecker(int first, int last, int m)
{
	long int num;

	if (last >= first)
	{
		num = first + (last - first) / 2;
		if (num * num == m)
			return (num);
		/*following binary search*/
		if (num * num > m)
			return (sqrtchecker(first, num - 1, m));
		if (num * num < m)
			return (sqrtchecker(num + 1, last, m));
	}
	return (-1);
}
/**
* _sqrt_recursion - square root of integer
* @n: given number
* Return: square root of integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (sqrtchecker(1, n, n));
}
