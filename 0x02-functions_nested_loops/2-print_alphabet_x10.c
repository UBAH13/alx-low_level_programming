#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - Entry point
 *  Return: 0 (if successful)
 */
 

void print_alphabet_x10(void)
{
int n;
char ch;
for (n = 0; n <= 9; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
