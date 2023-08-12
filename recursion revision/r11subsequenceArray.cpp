#include<iostream>
#include<vector>
using namespace std;

//printing subsequence 

void printSubSeq(int a[],int i,int n,vector<int>&v)
{
    if(i>n)
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    //take 

    v.push_back(a[i]);
    printSubSeq(a,i+1,n,v);
    v.pop_back();

    //not take

    printSubSeq(a,i+1,n,v);
}
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    printSubSeq(a,0,n-1,v);
}