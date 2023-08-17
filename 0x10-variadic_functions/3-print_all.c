#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the argument specifier
 *
 * Return: ...
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seperator = "";

	va_list them;

	va_start(them, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(them, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(them, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(them, double));
					break;
				case 's':
					str = va_arg(them, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(them);
}
