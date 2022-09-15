#include <stdio.h>
#include "main.h"
/**
 *  print_diagonal -   print_diagonal - print a diagonal line
 *  @n: n -  Variable
 *
 *  Return: Always 0.
 */
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int count;
for (count = 0; count < n; count++)
{
int laps = count;
while (laps > 0)
{
_putchar(' ');
laps--;
}
_putchar('\\');
_putchar('\n');
}
}
}
