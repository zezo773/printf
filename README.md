![](https://blog.holbertonschool.com/wp-content/uploads/2021/06/Fichier-13.png)

## printf()
The printf project is a collaboration between Ziad Ammar and Ahmed Yasser, actual students of Software Engineering at Holberton School, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

If the program runs successfully, the **return value** is the amount of chars printed.

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| %  | Character  |

## Examples

1. Printing the string of chars "Hello, Holberton":
	+ Use: `_printf("Hello Hol%s.", "berton");`
	+ Output: `Hello Holberton.`
	
2. Printing an integer number:
	+ Use: `_printf("10 + 10 is equal to %d.", 20);`
	+ Output: `10 + 10 is equal to 20.`

    ## File Functions

### _printf.c
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### main.h
Header File Were All Prototypes Are Saved.

------------
### print_char.c
Function That Writes The Character C To Stdout.
```c
/* Indetifier : %c */
```

------------

### print_string.c
Function That Writes The String To Stdout.
```c
/* Indetifier : %s */
```

------------

### print_int.c
Function That Prints An Integer.
```c
/* Indetifier : %i or %d */
```
------------

print_percent.c
Handel the '%'
```c
/* Indetifier : % */
```


------------
### End