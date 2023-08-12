#include<iostream>
#include<vector>
using namespace std;

//to output subsequence array whose sum equals a target sum...same element can be picked multiple times


void printSubSeq(int a[],int i,int n,int target,vector<int>&v)
{
    if(i>n)
    {
        if(target==0)
        {
            for(auto it:v)  
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(a[i]<=target)
    {
        v.push_back(a[i]);
        printSubSeq(a,i,n,target-a[i],v);
        v.pop_back();
    }
    printSubSeq(a,i+1,n,target,v); 
}
int main()
{
    int a[]={2,3,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    printSubSeq(a,0,n-1,7,v); 
}