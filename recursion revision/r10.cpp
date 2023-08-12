#include<iostream>
using namespace std;

//fibonacci series using Recursion

int printFibo(int n)
{
    if(n==1|| n==0)
    {
        return n;
    }
    return printFibo(n-1)+printFibo(n-2);
}

int main()
{
    cout<<printFibo(4);
}