#include "main.h"

/**
 * Produces output according to a format
 * @format: the format string
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start (args, format);

	if (format == 0)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_char(args);
					break;
				case 's':
					count += print_string(args);
					break;
				case '%':
					count += print_percent();
					break;
				case 'd':
				case 'i':
					count += print_int(va_arg(args, int));


			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
