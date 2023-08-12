#include<iostream>
#include<vector>
using namespace std;

//array permutations

void printPermu(int a[],int n,vector<int>&v,int freq[])
{
    if(v.size()==n)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!freq[i])
        {
            v.push_back(a[i]);
            freq[i]=1;
            printPermu(a,n,v,freq);
            freq[i]=0;
            v.pop_back();
        }
    }
}
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    int *freq=new int[n];
    for(int i=0;i<n;i++)
    {
        freq[i]=0;
    }
    printPermu(a,n,v,freq);
}