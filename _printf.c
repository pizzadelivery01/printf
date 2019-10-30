#include "holberton.h"

/**
 * _printf - formats and prints an inputed string
 * @format: inputed string
 * Description: mimics printf functions
 * Return: stringlength count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*mod)(va_list);
	unsigned int index = 0;
	unsigned int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	if (args == NULL)
		return (-1);
/*indexing through string*/
	for (; format[index] != '\0'; index++)
	{
		/*checking for modifier*/
		if (format[index] == '%')
		{
			index++;
			/*checking if only % is supplied*/
			if (format[index] == '\0')
				return (-1);
			mod = get_flag_func(format[index]);
			if (mod == NULL)
			{
				_putchar('%');
				_putchar(format[index]);
				count += 2;
			}
			else
				count += mod(args);
		}
		else
		{
		_putchar(format[index]);
		count++;
		}
	}
	va_end(args);
	return (count);
}
