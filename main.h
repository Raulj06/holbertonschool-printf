#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
/**
 * struct conversion - struct that associates characters to functions
 *
 * @specifier: specific character
 * @f: pointer to function associated to specifier
 *
 */
typedef struct conversion
{
	char specifier;
	int (*f)(va_list args);
} conv_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int conv_spec(const char *format, va_list ap);
int valid_conversion(char c);
int function_call(char c, va_list ap);
int print_digits(va_list ap);
int print_int(int n);
#endif
