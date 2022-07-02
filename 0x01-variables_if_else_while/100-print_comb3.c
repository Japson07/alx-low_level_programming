#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}int main(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(48 + i);
putchar(48 + j);
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
