#include "main.h"

/**
 * print_char - print a character
 * @c: input character
 * @count: input pointer
 *
 * print_string - print a string
 * @str:constant char
 * @count:input pointer
 */
void print_char(char c, int *count)
{
_putchar(c);
(*count)++;
}

void print_string(const char *str, int *count)
{
if (str != NULL)
{
while (*str)
{
_putchar(*str);
(*count)++;
str++;
}
}
}
