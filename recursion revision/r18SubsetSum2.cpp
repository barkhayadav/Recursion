#include<iostream>
#include<vector>
using namespace std;

//subset sum...no duplicates

void printSubset(int a[],int n,int index,vector<int>&op,vector<vector<int>>&ans)
{
    ans.push_back(op);
    for(int i=index;i<n;i++)
    {
        if(i!=index && a[i]==a[i-1])
        {
            continue;
        }
        op.push_back(a[i]);
        printSubset(a,n,index+1,op,ans);
        op.pop_back();
    }
}
int main()
{
    int a[]={1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>op;
    vector<vector<int>>ans;
    printSubset(a,n,0,op,ans);
    for(int i=0;i<ans.size()-1;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}