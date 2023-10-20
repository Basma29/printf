#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int num = -12345;
char *str = "Hello, world!";
_printf("Character: %c\nString: %s\nPercent sign:
%%\nInteger (decimal): %d\nInteger (int): %i\n", 'A', str, num, num);
return (0);
}
