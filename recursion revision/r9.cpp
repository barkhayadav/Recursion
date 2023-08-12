#include<iostream>
using namespace std;

//Reversing an Array using Recursion

void reverseArray(int a[],int i,int n)
{
    if(i>=n)
    {
        return;
    }
    swap(a[i],a[n]);
    reverseArray(a,i+1,n-1);
}

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    reverseArray(a,0,n-1);
    for(int it:a)
    {
        cout<<it<<" ";
    }
}