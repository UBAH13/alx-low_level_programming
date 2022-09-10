#include <stdio.h>

/**
 * main - print the string in the input function
 * description: using the main function
 * Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("size of char : % ld bytes(s)\n", (sizeof(c)));
printf("size of int : % ld bytes(s)\n", (sizeof(i)));
printf("size of long : % ld bytes(s)\n", (sizeof(li)));
printf("size of long long : % ld bytes(s)\n", (sizeof(lli)));	
return (0);
}
