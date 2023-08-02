#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - is the length of a string
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pal - checks for palindrome in characters recursively
  * @s: the string to get the length
  * @i: iterator
  * @len: length of the string
  *
  * Return: the string length
  */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
