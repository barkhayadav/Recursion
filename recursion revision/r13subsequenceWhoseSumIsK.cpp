#include<iostream>
#include<vector>
using namespace std;

//to return an array whose subsequence sum is equal to K(say)

void printSubSeqWhoseSumK(int a[],int i,int n,int target,vector<int>&v)
{
    if(i>n)
    {
        int totSum=0;
        for(auto it:v)
        {
            totSum+=it;
        }
        if(totSum==target)
        {
            for(auto it:v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    v.push_back(a[i]);
    printSubSeqWhoseSumK(a,i+1,n,target,v);
    v.pop_back();
    printSubSeqWhoseSumK(a,i+1,n,target,v);
}
int main()
{
    int a[]={1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    printSubSeqWhoseSumK(a,0,n,2,v);
}