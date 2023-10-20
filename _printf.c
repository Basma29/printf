#include "main.h"
/**
 * _printf - produces output according to a format.
 *
 * @format: string
 *
 * Return: the number of characters printed excluding '\0'
 */
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;

va_list args;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] != '%')
{
putchar(format[i]);
count++;
}
else
{
i++;
switch (format[i])
{
case 'c':
{
int c = va_arg(args, int);
putchar(c);
count++;
break;
}
case 's':
{
const char *string = va_arg(args, const char *);
if (string != NULL)
{
while (*string)
{
putchar(*string);
string++;
count++;
}
}
break;
}
case '%':
{
putchar('%');
count++;
break;
}
default:
{
}
}
}
i++;
}
va_end(args);
return (count);
}
