#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_percent - prints percent charater
 * @args: percent sign
 * Description: prints percent sign
 * Return: 1
 */
int print_percent(va_list __attribute__((unused)) args)
{
	_putchar('%');
	return (1);
}
