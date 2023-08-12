#include<iostream>
#include<vector>
using namespace std;

//subset sum

void printSubsetSum(int a[],int i,int n,vector<int>v)
{
    if(i>n)
    {
        int sum=0;
        for(auto it:v)
        {
            sum+=it;
        }
        cout<<sum<<endl;
        return;
    }
    v.push_back(a[i]);
    printSubsetSum(a,i+1,n,v);
    v.pop_back();
    printSubsetSum(a,i+1,n,v);
}

int main()
{
    int a[]={3,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    printSubsetSum(a,0,n-1,v);
}