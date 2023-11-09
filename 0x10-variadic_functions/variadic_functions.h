#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdarg.h>

/**
 * struct data - in order to print types
 * @token: format specifier
 * @f: function to be printed
 */
typedef struct data
{
	char *token;
	void (*f)(va_list);
} data_prnt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
