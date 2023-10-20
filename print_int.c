#include "main.h"
/**
 * print_int - print an integer
 * @args: input list
 * @count: input count
 *
 * Return: Always 0
 */
void print_int(va_list args, int *count)
{
int num = va_arg(args, int);
if (num < 0)
{
_putchar('-');
(*count)++;
num = -num;
}
int div = 1;
while (num / div >= 10)
div *= 10;
while (div != 0)
{
_putchar('0' + num / div);
(*count)++;
num %= div;
div /= 10;
}
}
