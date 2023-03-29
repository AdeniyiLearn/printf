#include "main.h"

/**
 * _printf - funtion prints like printf
 * @format: first constant string parameter
 * Return: 0 if succesful
 */
int _printf(const char *format, ...)
{
	int word_count = 0, num = 0;
	char letter, *word;
	va_list args;

	va_start(args, format);

	while (format[num])
	{

		if (format[num]== '\0')
		{
			return (0);
		}
		if (format[num] == '%')
		{
		switch (format[num + 1])
		{
		case '%':
			word_count += _putchar('%');
			break;
		case 'c':
			letter = (char) va_arg(args, int);
			word_count += _putchar(letter);
			break;
		case 's':
			word = va_arg(args, char *);
			word_count += _puts(word);
			break;

		default:

			break;
		}
		num++; /* to move to the next xter after 's' or 'c' of specifier */
		}
		else
		{
			word_count += _putchar(format[num]);
		}
		num++;
	}
	va_end(args);
	return (word_count);
}
