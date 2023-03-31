#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * sym_s - funcion to print a string
 * @args: string
 *
 * Return: The string
 */
int sym_s(va_list args)
{
	char *s;
	int x = 0;


	s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}
	return (x);
}
/**
 * sym_c - A function to print a char
 * @args: the va_list passed from the function
 *
 * Return: Placeholder
 */
int sym_c(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}

/**
 * percent - Function to print percent
 * @args: Variadic args.
 *
 * Return: 1
 */
int percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
