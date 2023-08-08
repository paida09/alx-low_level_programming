#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		s[r] = str[r];

	return (s);
}
