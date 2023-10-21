#include "main.h"

/**
 * print_integer- print an integer
 * @n: the first integer
 * @count: input pointer
 *
 *
 */
void print_integer(int n, int *count)
{
int i;
char buffer[12];
int chars_written = snprintf(buffer, sizeof(buffer), "%d", n);
for (i = 0; i < chars_written; i++)
{
_putchar(buffer[i]);
(*count)++;
}
}
