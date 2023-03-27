#include "main.h"

/**
 * _printf - funtion prints like printf
 * @format: first constant string parameter
 * Return: 0 if succesful
 */
int _printf(const char *format, ...)
{
	char *string;
	int count, num, digit;
	unsigned int dot;
	va_list arg;

	count = 0;
	va_start(arg, format);
	for (; *format != '\0'; format++)
	{
		while (*format != '%')
		{
			_putchar(*format);
			format++;
			count++;
		}
		format++;
		switch (*format)
		{
			case 'c':
				num = va_arg(arg, int);
				_putchar(num);
				count++;
				break;
			case 's':
				string = va_arg(arg, char *);
				string_put(string);
				break;
			case 'd':
				digit = va_arg(arg, int);
				digital(digit);
				break;
			case 'b':
				digit = va_arg(arg, int);
				count += bina(digit);
				break;
			default:
				break;
		}
	}
	va_end(arg);
	return (count);
}
