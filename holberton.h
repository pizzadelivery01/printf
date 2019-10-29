#ifndef holberton_h
#define holberton_h
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int (*get_flag_func(char flag))(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
typedef struct flags
{
	char *ch;
	int (*func)(va_list);
} flags_t;


#endif
