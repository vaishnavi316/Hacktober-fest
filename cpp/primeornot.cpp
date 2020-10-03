#include<iostream>
using namespace std;
int main()
{
  int n,i,count=0;
  cout<<"enter n value";
  cin>>n;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    count=1;
    break;
  }
  if(count==1)
  {
    cout<<"not prime";
  }
  else
  {
   cout<<"prime";
    
  }
  return 0;
}
