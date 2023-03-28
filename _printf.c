#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - A function to print some formats
 *
 * @format: The format
 *
 * Return: n of character printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int x = 0, y = 0;
	int res = 1;
	syms sim[] = {
		{'c', sym_c},
		{'s', sym_s},
		{'d', NULL},
		{'i', NULL},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			while (sim[y].f != NULL)
			{
				if (sim[y].sym == format[x + 1])
				{
					res += sim[y].f(args);
					x++;
				}
				if (format[x + 1] == '%')
				{
					_putchar(format[x]);
					x++;
				}
				y++;
			}
		}
		else
		{
			_putchar(format[x]);
		}
		x++;
	}
	va_end(args);
	return (res);
}
