#include<iostream>
#include<vector>
using namespace std;

//to output subsequence array whose sum equals a target sum...no duplicates

void printSubSeq(int a[],int index,int n,int target,vector<int>&v)
{    
    if(target==0)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=index;i<n;i++)
    {
        if(i>index && a[i]==a[i-1])
        {
            continue;
        }
        if(a[i]>target)
        {
            break;
        }
        v.push_back(a[i]);
        printSubSeq(a,i+1,n,target-a[i],v);
        v.pop_back();
    }
}
int main()
{
    int a[]={1,1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    int target=4;
    vector<int>op;
    printSubSeq(a,0,n,target,op);
    
}