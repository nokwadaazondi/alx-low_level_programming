#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of ll its parameters
 * @n: The number of parameters passed to the function
 * @...: A vairiable number of parameters to calculatr the sum of
 * Return: if n == 0 - 0
 * Otherswise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
