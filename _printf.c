#include "main.h"
#include<stdio.h>
/**
 * _printf - produces output according to a format.
 * @format: string
 * Return: the number of characters printed excluding '\0'
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = vprintf(format, args);
va_end(args);
return (count);
}
