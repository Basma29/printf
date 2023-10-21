#include "main.h"
#include "print_chars.c"
#include "print_integers.c"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char c = 'c';
char name[] = "Abdelrahman";
int number = 42;

int count = 0;
_printf("Hello, %s. Your name is printed using %% and the %c character. The number is %d.\n", name, c, number);
return (0);
}
