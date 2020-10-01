#include<stdio.h>
main(){
    int n,m,s,p=0;
    printf("enter a number ");
    scanf("%d",&n);
    m=n; 
    while(n>0)
    {
        s=n%10;
        p=p*10+s;
        n=n/10;
    }
    if(m==p)
    printf("given number is pallindrome");
    else
    printf("given number is not a palindrome");
}
