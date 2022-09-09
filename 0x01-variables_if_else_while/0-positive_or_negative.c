#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 * return:Always 0 (success)
 */
int main (void) {
int n;
srand(time(0));
n=rand() - RAND_MAX / 2;
      if(n>0)
	printf("%d is postive\n",n);
      else
        printf("%d is negative number\n"n);
return (0);      
}
