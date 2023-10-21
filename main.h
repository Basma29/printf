#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(char c, int *count);
void print_string(const char *str, int *count);
void print_integer(int n, int *count);

#endif
