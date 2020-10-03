#include<iostream.h>
using namespacestd;
int main
{
int a=10,b=20, temp;
cout<<"before swapping a,b values :"<<endl;
cout<<"a= "<<a<<"b= "<<endl;
swap(a,b);
temp=a;
a=b;
b=a;
cout<<"after swapping a,b values "<<endl;
cout<<"a= "<<a<<"b= "<<b<<endl;
return 0;
}
