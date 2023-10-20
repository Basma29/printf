#include "main.h"
/**
 * print_char - print character
 *@args:input list
 *@count:input pointer
 * Return: Always 0
 */
void print_char(va_list args, int *count)
{
_putchar(va_arg(args, int));
(*count)++;
}
