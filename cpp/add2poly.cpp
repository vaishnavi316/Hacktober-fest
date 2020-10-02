#include <iostream>
using namespace std;

void add(int a[], int b[], int d1, int d2){

    int max_deg = (d1>d2) ? d1:d2;
    int c[max_deg];
    if(max_deg==d1)
    {
        for (int i=0; i<d2; i++)
        {
            c[i]=b[i];
        }
        for (int i=0; i<max_deg; i++)
        {
            c[i]=a[i]+b[i];
        }
    }
    else
    {
        for (int i=0; i<d1; i++)
        {
            c[i]=b[i];
        }
        for (int i=0; i<max_deg; i++)
        {
            c[i]=c[i]+b[i];
        }
        }
    }
int main()
{
    int deg1,deg2;
    cout<<"enter 1st degree";
    cin>>deg1;
    int a[deg1];
    for (int i=0; i<deg1; i++)
    cin>>a[i];
    cout<<"enter 2nd degree";
    cin>>deg2;
   int b[deg2];
    for (int i=0; i<deg2; i++)
    cin>>b[i];
    add (a,b, deg1, deg2);
    
     void dispaly()
    }
