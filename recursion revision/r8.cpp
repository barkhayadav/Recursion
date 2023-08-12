#include<iostream>
#include<vector>
using namespace std;

//Returning an array

vector<int> returnArray(int a[],int i,int n,int item,vector<int>&newArray)
{
    if(i==n)
    {
        return newArray;
    }
    if(a[i]==item)
    {
        newArray.push_back(i);
    }
    return returnArray(a,i+1,n,item,newArray);
}

int main()
{
    int a[]={1,2,3,3,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>newArray;
    returnArray(a,0,n,3,newArray);
    for(auto it:newArray)
    {
        cout<<it<<" ";
    }
}