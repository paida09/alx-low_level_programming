#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int j, cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = cj = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[cj] != '\0')
		cj++;
	c = malloc(sizeof(char) * (j + cj + 1));

	if (c == NULL)
		return (NULL);
	j = cj = 0;
	while (s1[j] != '\0')
	{
		c[j] = s1[j];
		j++;
	}

	while (s2[cj] != '\0')
	{
		c[j] = s2[cj];
		j++, cj++;
	}
	c[j] = '\0';
	return (c);
}
