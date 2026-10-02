#include <stdio.h>

int main (void)
{
    int a, b, c, sum;
    printf("Enter your first number to be added: ");
    scanf("%d",&a);
    printf("Enter your second number to be added: ");
    scanf("%d",&b);
    printf("Enter your third number to be added: ");
    scanf("%d",&c);
    sum=a+b+c;
    printf("sum=%d",sum);
    return 0;
}