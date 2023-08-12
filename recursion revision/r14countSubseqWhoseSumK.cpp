#include<iostream>
#include<vector>
using namespace std;

int countSubseqWhoseSumK(int a[],int i,int target,int n,int sum,vector<int>&v)
{
    if(i>n)
    {
        if(sum==target)
        {
            return 1;
        }
        return 0;
    }
    v.push_back(a[i]);
    sum+=a[i];
    int l=countSubseqWhoseSumK(a,i+1,target,n,sum,v);
    v.pop_back();
    sum-=a[i];
    int r=countSubseqWhoseSumK(a,i+1,target,n,sum,v);
    return l+r;
}
int main()
{
    int a[]={1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    cout<<countSubseqWhoseSumK(a,0,1,n-1,0,v);
}