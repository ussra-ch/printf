#include "main.h"
#include <stdarg.h>
/**
 * print_s - prints string
 * @args: input
 *Return: length of the string printed
 */
int print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	int len = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	return (len);
}
/**
 * print_c - prints character
 * @arg: input
 * Return: 1 (nbr of characters returned)
 */
int print_c(va_list arg)
{
	int c = va_arg(arg, int);

	if (c == '\0')
	{
		c = '(null)';
	}
	_putchar(c);
	return (1);
}
/**
 * print_percent - print percent
 * @arg: %
 * Return: 1 (charachters printed)
 */
int print_percent(va_list arg)
{
	int c = va_arg(arg, int);

	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
