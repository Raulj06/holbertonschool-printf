#include "main.h"
/**
 * conv_spec - conversion specifier
 *
 * @format: string
 * @ap: argument pointer
 *
 * Return: count
 */
int conv_spec(const char *format, va_list ap)
{
	int i, count = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (valid_conversion(format[i + 1]) == 1)
			{
				count += function_call(format[i + 1], ap);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			if (format[i] == '%')
			{
				return (-1);
			}

			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}

/**
 * valid_conversion - checks if character is valid conv spec
 *
 * @c: a character from format
 *
 * Return: 0 otherwise 1
 */
int valid_conversion(char c)
{
	int i;
	char array[] = {'c', 's', '%', 'i', 'd'};

	for (i = 0; array[i] != '\0'; i++)
	{
		if (c == array[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * function_call - calls function to print
 *
 * @c: character to compare with converter array
 * @ap: argument pointer
 *
 * Return: num of printed characters
 */
int function_call(char c, va_list ap)
{
	int i, count = 0;
	conv_t converter[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_digits},
		{'d', print_digits},
		{'\0', NULL}
	};

	for (i = 0; converter[i].specifier != '\0'; i++)
	{
		if (converter[i].specifier == c)
		{
			count += converter[i].f(ap);
			return (void);
		}
	}
	_putchar(c);
	count++;

	return (count);
}
