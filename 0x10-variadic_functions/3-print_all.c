#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_int - print ints
 * @ap: va_list the integer list to be printed
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - float to print
 * @ap: va_list the float list to be printed
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_char - print char
 * @ap: va_list the char list to print
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_string - prints string
 * @ap: va_list the string list to be printed
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	printf("%s", s == NULL ? "(nil)" : s);
}

/**
 * print_all - prints all thingd
 * @format: types of args passed into func
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int k = 0, h;
	char *sep = "";

	data_prnt lst[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[k])
	{
		h = 0;
		while (h < 4 && format[k] != lst[h].token[0])
			++h;
		if (h < 4)
		{
			printf("%s", sep);
			lst[h].f(ap);
			sep = ", ";
		}
		++k;
	}
	printf("\n");
	va_end(ap);
}
