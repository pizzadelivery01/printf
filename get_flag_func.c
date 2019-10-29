#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * get_flag_func - pull function that is need for flag supplied
 * @flag: flag character
 * Description: uses flag to pull proper function from struct
 * Return: Function
 */
int (*get_flag_func(char flag))(va_list args)
{
	int i = 0;

	flags_t mod[] = {
		{"c", print_char},
		{"s", print_string},
/*		{"%", print_percent},
 *		{"d", print_decimal},
 *		{"i", Print_integer},
 */		{NULL, NULL}
	};
	for (; mod[i].ch != NULL; i++)
	{
		if (flag == *mod[i].ch)
		return (mod[i].func);
	}
	return (NULL);
}
