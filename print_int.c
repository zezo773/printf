#include "main.h"

/**
 * print_int - Prints an integer to stdout
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += print_int(n / 10);
	_putchar((n % 10) + '0');
	count++;

	return (count);
}
