#include "main.h"

/**
 * _printf - funtion prints like printf
 * @format: first constant string parameter
 * Return: 0 if succesful
 */
int _printf(const char *format, ...)
{
	int pc1 = 0, pc2 = 0, pc3 = 0;
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
			pc1++;
		}
		/*encounter with % and subsequents specifiers*/
		else
		{
		count += 1;
			if (*(format + (count)) == 'c')
			{
				num = va_arg(arg, int);
				if (num == '\0')
				{
					continue;
				}
				else
				{
					_putchar(num);
				}
				pc2++;
			}
			else if (*(format + (count)) == 's')
			{
				string = va_arg(arg, char *);
				if (string == NULL)
				{
					continue;
				}
				else
				{
					string_put(string);
				}
				pc3++;
			}
		}

	}
	va_end(arg);
	return (pc1 + pc2 + pc3);
}
