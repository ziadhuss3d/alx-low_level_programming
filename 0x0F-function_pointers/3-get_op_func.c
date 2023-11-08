#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - get the correct func to perform operation
 * @s: operator string
 *
 * Return: func pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op != NULL)
	{
		if (*s == *(ops[j].op) && *(s + 1) == '\0')
			return (ops[j].f);
		j++;
	}
	printf("Error\n");
	exit(99);
}
