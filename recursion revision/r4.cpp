#include<iostream>
#include<string.h>
using namespace std;

//checking Palindrome

bool isPalindrome(char ch[],int i,int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(ch[i]!=ch[n-i-1])
    {
        return false;
    }
    return isPalindrome(ch,i+1,n);
}

int main()
{
    char ch[]="madam";
    int n=strlen(ch);
    isPalindrome(ch,0,n)? cout<<"Palindrome": cout<<"Not Palindrome!";
}