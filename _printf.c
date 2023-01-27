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
	va_list arg;

	va_start(arg, format);
	for (; *format != '\0'; format++)
	{
		count++;
		while (*format != '%')
		{
			_putchar(*format);
			format++;
		}
		format++;
		switch (*format)
		{
			case 'c':
				num = va_arg(arg, int);
				_putchar(num);
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
				bina(digit);
				break;
			default:
				break;
		}
	}
	va_end(arg);
	return (count);
}
