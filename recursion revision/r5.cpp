#include<iostream>
using namespace std;

//Count number of 0

int countNum(int num,int count)
{
    if(num==0)
    {
        return count;
    }
    if(num%10==0)
    {
        return countNum(num/10,count+1);
    }
    else
    {
        return countNum(num/10,count);
    }
}

int main()
{
    cout<<countNum(40080,0);
}

