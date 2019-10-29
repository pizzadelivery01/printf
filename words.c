#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_char - prints a charater
 * @args: charater to print
 * Description: takes inputed character prints to stdout
 * Return: char length
 */
int print_char(va_list args)
{
	char output = va_arg(args, int);

	_putchar(output);
	return (1);
}

/**
 * print_string - prints string
 * @args: string inputed
 * Description: takes inputed string prints to standard out
 * Return: string length
 */
int print_string(va_list args)
{
	int count;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}
