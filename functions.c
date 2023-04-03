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

/**
 * printdec - A function to print 'd' and 'i'
 * @args: Variadic arguments
 *
 * Return: Resultado, variable that stores the values
 */

int printdec(va_list args)
{
	long int n = va_arg(args, int);
	char arreglo[20];
	long int i = 0, resultado = 0;

	if (n == 0)
	{
		_putchar('0');
		resultado++;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		resultado++;
	}

	while (n > 0)
	{
		arreglo[i] = n % 10 + '0';
		n /= 10;
		i++;
	}

	i--;

	while (i >= 0)
	{
		_putchar(arreglo[i]);
		i--;
		resultado++;
	}
	return (resultado);
}

/**
 * printbin - A function to print binary
 * @args: variadic argument
 *
 * Return: digits printed.
 */
int printbin(va_list args)
{
	long int num = va_arg(args, int);
	char bin[32];
	long int x = 0, y, result = 0;

	if (num == 0)
	{
		_putchar('0');
		result++;
	}

	while (num > 0)
	{
		bin[x] = num % 2;
		num /= 2;
		x++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(bin[y] + '0');
		result++;
	}
	return (result);
}
