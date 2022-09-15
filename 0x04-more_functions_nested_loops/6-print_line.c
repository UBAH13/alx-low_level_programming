#include <stdio.h>
#include "main.h"
/**
 *  print_line -  checks for checks for a digit (0 through 9).
 *  @n: n -  Variable
 *  Return: Always 0.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return (0);
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
return (0);
}
}
