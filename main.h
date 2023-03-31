#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
/**
 * struct sym - The structure
 *
 * @sym: the symbol.
 * @f: Function associated.
 */
typedef struct sym
{
	char sym;
	int (*f)(va_list);
} syms;

int sym_c(va_list args);
int sym_s(va_list args);
char _putchar(char c);
int call_f(va_list args, char s);
int percent(va_list args);

#endif
