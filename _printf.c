#include "main.h"

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
_putchar(format[i]);
count++;
}
else
{
i++;
switch (format[i])
{
case 'c':
print_char(va_arg(args, int), &count);
break;
case 's':
print_string(va_arg(args, const char *), &count);
break;
case 'd':
case 'i':
print_integer(va_arg(args, int), &count);
break;
case '%':
_putchar('%');
count++;
break;
default:
break;
}
}
i++;
}
va_end(args);
return (count);
}
