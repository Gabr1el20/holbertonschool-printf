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
	int x, res = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (x = 0; format[x]; x++)
	{
		if (format[x] == '%')
		{
			if (!format[x + 1])
				return (-1);

			res += call_f(args, format[x + 1]);
			x++;
		}
		else
		{
			_putchar(format[x]);
			res++;
		}
	}
	va_end(args);
	return (res);
}
