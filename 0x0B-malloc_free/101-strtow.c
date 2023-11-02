#include <stdio.h>
#include <stdlib.h>

char *word_cp(char *ch, int begin, int end);
int str_size(char *s);
void word_free(char **wd, int wc);
int word_count(char *ch);

/**
 * strtow - splits a string into words
 * @str: string to be splited
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	char **words;
	int wdc, str_len, start = 0, end, index = 0, i;

	wdc = word_count(str);
	if (!wdc)
		return (NULL);

	words = malloc(sizeof(char *) * (wdc + 1));
	if (!words)
		return (NULL);

	str_len = str_size(str);
	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1]))
		{
			end = i + 1;
			words[index] = word_cp(str, start, end);
			if (!words[index])
				return (word_free(words, index), NULL);
			index++;
		} else if (str[i] != ' ' && str[i + 1] != ' ')
			continue;
		else
			start = i + 1;
	}

	return (words);
}

/**
 * str_size - returns the size of string
 * @s: string to get its size
 *
 * Return: size of string
 */
int str_size(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}

/**
 * word_cp - copies word from str
 * @ch: data copy from
 * @begin: start item word
 * @end: end item word
 *
 * Return: pointer
 */

char *word_cp(char *ch, int begin, int end)
{
	char *wd;
	int c;

	wd = malloc(sizeof(char) * (end - begin + 1));
	if (!wd)
		return (NULL);

	for (c = 0; c < end - begin; c++)
		wd[c] = ch[begin + c];
	wd[c] = '\0';

	return (wd);
}

/**
 * word_free - free the words array
 * @wd: array words
 * @wc: count words
 * Return: nothing
 */
void word_free(char **wd, int wc)
{
	int c;

	for (c = 0; c < wc; c++)
		free(wd[c]);
	free(wd);
}

/**
 * word_count - count number of words in string
 * @ch: count string
 *
 * Return: words count
 */
int word_count(char *ch)
{
	int wd_cnt = 0, size, x;

	if (!ch || !ch[0])
		return (0);

	size = str_size(ch);

	for (x = 0; x < size; x++)
	{
		if (ch[x] != ' ' && (ch[x + 1] == ' ' || ch[x + 1] == '\0'))
			wd_cnt++;
	}

	return (wd_cnt);
}
