#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_bin - converts dec to bin.
 * @args: argument.
 * Return: binary value.
 */
int print_bin(va_list args)
{
	int d = va_arg(args, int);
	int bin[32];
	int i = 0;
	int count = 0;
	int j;

	if (d == 0)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	while (d > 0)
	{
		bin[i] = d % 2;
		d = d / 2;
		i++;
		count++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(bin[j] + 48);
		j--;
	}
	return (count);
}
