#include<iostream>
using namespace std;

//Binary Search using recursion

bool binarySearch(int a[],int i,int n,int item)
{
    if(i>n)
    {
        return false;
    }
    int mid=i+(n-i)/2;
    if(item==a[mid])
    {
        return true;
    }
    if(a[mid]>=item)
    {
        return binarySearch(a,i,mid-1,item);
    }
    else
    {
        return binarySearch(a,mid+1,n,item);
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int item=4;
    binarySearch(a,0,n-1,item)? cout<<"Found!": cout<<"Not found!";
}