#include<stdio.h>
void main()
{
    int a=1,b=1,c,n,i;
    printf("enter n value");
    scanf("%d",&n);
    printf("Fibonacci series is \n %d \t %d \t",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
