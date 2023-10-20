#include "main.h"
/**
 * _printf - print char
 * @format : pointer to constant char
 *
 */
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;
va_list args;

va_start(args, format);
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
i++;
if (format[i] == 'c')
print_char(args, &count);
else if (format[i] == 's')
print_string(args, &count);
else if (format[i] == '%')
print_percent(&count);
else if (format[i] == 'd' || format[i] == 'i')
print_int(args, &count);
}
i++;
}
va_end(args);
return count;
}
