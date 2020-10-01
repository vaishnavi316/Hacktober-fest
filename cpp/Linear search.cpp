#include<iostream>
using namespace std;
int main()
{
    int a[7]={8,4,5,6,3,40,2};
    int search=3;
    int i=0;
    for(i=0;i<7;i++){
        if(a[i]==search){
            cout<<"element is found at "<<i<<endl;
            break;
        }
    }
    if(i==7)cout<<"element is not found";
}
