#include "main.h"

/** 
 * print_char - handels the %c
 * @args: va_list cotaning the character
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}
