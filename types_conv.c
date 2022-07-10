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

/**
  * print_digits - prints integer
  *
  * @ap: argument pointer
  *
  * Return: count of numbers printed
  */
int print_digits(va_list ap)
{
	int num = 0, count = 0;

	num = va_arg(ap, int);
	count += print_int(num);

	return (count);
}

/**
 * print_int - prints  integer
 *
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int print_int(int n)
{
	int count = 1;
	unsigned int num = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = n * -1;
	}

	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}
	_putchar((num % 10) + 48);
	return (count);
}
