#include<iostream>
using namespace std;

//sum of digits using Recursion

int sumOfDigits(int n,int totalSum)
{
    if(n==0)
    {
        return totalSum;
    }
    int sum=n%10;
    return sumOfDigits(n/10,sum+totalSum);
}

int main()
{
    cout<<sumOfDigits(1234,0);
}