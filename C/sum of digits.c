#include<stdio.h>
main(){
    int n,s,p=0;
    printf("enter n value");
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        p=p+s;
        n=n/10;
    }
    printf("The sum of digits is:%d",p);
}
