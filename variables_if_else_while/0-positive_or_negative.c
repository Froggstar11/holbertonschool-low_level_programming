#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int n = rand();
if(n > 0)
{
printf("%d is positive", n);      
}
if(n < 0)
{
printf("%d is negative", n);
}
if(n == 0){
printf("%d is zero", n);
}
return 0;
}
