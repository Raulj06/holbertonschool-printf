#include "main.h"
/**
 * _printf - the function to print
 *
 * @format: the string to print
 *
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int num_of_char = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	if (ap == NULL)
		return (-1);

	num_of_char = conv_spec(format, ap);

	va_end(ap);
	return (num_of_chars);
}
