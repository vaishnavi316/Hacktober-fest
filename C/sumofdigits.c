#include<stdio.h>
main(){
    int n,s,p=0;
    printf("enter a value");
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        p=p+s;
        n=n/10;
    }
    printf("the sum of digits is: %d",p);
}
