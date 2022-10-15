#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - sum of all parameters passed
 * @n: number of parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
