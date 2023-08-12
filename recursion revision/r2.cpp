#include<iostream>
using namespace std;

//To check if an array is sorted

bool isSorted(int a[],int n,int i)
{
    if(i>=n)
    {
        return true;
    }
    if(a[i]>a[i+1])
    {
        return false;
    }
    return isSorted(a,n,i+1);

}

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    isSorted(a,n,0)? cout<<"Sorted!": cout<<"Not sorted!";
}
