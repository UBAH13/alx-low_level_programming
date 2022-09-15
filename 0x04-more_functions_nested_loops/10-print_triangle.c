#include <stdio.h>
#include "main.h"
/**
 *  print_triangle - Prints a triangle
 *  @size: sets the size of the triangle
 *
 *  Return: nothing
 */
void print_triangle(int size)
{
int hght, base;
if (size <= 0)
_putchar('\n');
else
{
for (hght = 1; hght <= size; ++hght)
{
for (base = 1; base <= size; ++base)
{
if ((hght + base) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
