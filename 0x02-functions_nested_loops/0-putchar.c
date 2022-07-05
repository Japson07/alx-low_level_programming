#include "main.h"
/**
*main - prints "putchar"
*Return: 0
*/
int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; 1 < 8; 1++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}
