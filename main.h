#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct Handler_format
{
	char c;
	int (*f)(va_list args, flags_format *f);
} switch_fromat;

/* write */
int _putchar(char c);
int _puts(char *str);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_format *);

/* get_flag */
int get_flag(char s, flags_format *f);

/* percent */
int print_percent(va_list args, flags_format *f);

/* address */
int print_address(va_list args, flags_format *f);

#endif
