#include <stdio.h>
/**
 * main - main block
 * Description: print alphabets in lower case
 * excluding e and q
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchat(\n);
	return (0);
}
