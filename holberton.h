#ifndef holberton_h
#define holberton_h
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int print_percent(va_list args);
int (*get_flag_func(char flag))(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int print_decimal(va_list args);
int print_integer(va_list args);
int print_bin(va_list args);

/**
 * struct flags - struct for finding functions
 * @ch: character
 * @func: function
 *
 * Description: sturct to combine char's to func's
 */
typedef struct flags
{
	char *ch;
	int (*func)(va_list);
} flags_t;


#endif
