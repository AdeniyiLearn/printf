#include "main.h"

/**
 * _printf - funtion prints like printf
 *
 *
 * @format: first constant string parameter
 *
 *
 * Return: 0 if succesful
 *
 */

int _printf(const char *format, ...)
{
	char num;
	char *string;
	int count, len = _strlen(format);
	va_list arg;

	va_start(arg, format);

	for (count = 0; count < len; count++)
	{
		/*print string without formats*/
		if (*(format + count) != '%')
		{
			_putchar(*(format + count));
		}
		/*encounter with % and subsequents specifiers*/
		else
		{
			count += 1;

			/*character formating*/
			if (*(format + (count)) == 'c')
			{
				num = va_arg(arg, int);
				_putchar(num);
			}

			/*string formatting*/
			else if (*(format + (count)) == 's')
			{
				string = va_arg(arg, char *);

				do {
					_putchar(*string);
				} while (*string++);
			}
		}
	}
	return (0);
}