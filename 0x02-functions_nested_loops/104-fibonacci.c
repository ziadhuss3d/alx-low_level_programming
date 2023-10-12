#include <stdio.h>	/* printf */
#include <string.h>	/* strlen, strcpy */

/**
 * reverse_string - function that reverses the order of a string
 *
 * Description:
 * This function takes a string and reverses the order of its characters
 * in place and returns the reversed string.
 *
 * @str: the string to be reversed
 * Return: pointer to the reversed string
*/
char *reverse_string(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	char temp;

	while (right > left)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		right--;
		left++;
	}
	return (str);
}
