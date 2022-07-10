#include "main.h"
/**
 * print_char - prints character
 *
 * @ap: argument pointer
 *
 * Return: num of characters printed
 */
int print_char(va_list ap)
{
	int count = 0;
	unsigned char c;

	if (ap == NULL)
		return (-1);

	c = va_arg(ap, int);

	_putchar(c);
	count++;

	return (count);
}

/**
 * print_string - prints string
 *
 * @ap: argument pointer
 *
 * Return: num of characters printed
 */
int print_string(va_list ap)
{
	int i, count = 0;
	char *string;

	string = va_arg(ap, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_percent - prints %
 *
 * @ap: argument pointer
 *
 * Return: num of characters printed
 */
int print_percent(va_list ap)
{
	int count = 0;
	(void) ap;

	_putchar('%');
	count++;

	return (count);
}
