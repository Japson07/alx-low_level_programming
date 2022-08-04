#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
/**
 * struct format - Data type of a format
 * @op: Format
 * @f: Function
 */
typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;
#endif
