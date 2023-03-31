#include "main.h"

/**
 * call_f - A function that calls another function
 * @args: Variadic arguments.
 * @s: The character to be match.
 *
 * Return: res
 */
int call_f(va_list args, char s)
{
	syms sim[] = {
		{'c', sym_c},
		{'s', sym_s},
		{'%', percent},
		{'d', NULL},
		{'i', NULL},
		{'\0', NULL}
	};
	int i;

	for (i = 0; sim[i].sym && s; i++)
	{
		if (sim[i].sym == s)
		{
			return (sim[i].f(args));
		}
	}
	_putchar('%');
	_putchar(s);
	return (2);
}
