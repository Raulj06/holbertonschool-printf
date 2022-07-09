#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_rot13(va_list ap);
int conv_spec(const char *format, va_list ap);

#endif
