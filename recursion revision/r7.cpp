#include<iostream>
#include<string.h>
using namespace std;

//Print string without a's in it

void skipA(string str,int i,string newString)
{
    if(str[i]=='\0')
    {
        cout<<newString;
        return;
    }
    if(str[i]!='a')
    {
        newString+=str[i];
    }
    skipA(str,i+1,newString);
}

int main()
{
    string str="madam";
    string newString="";
    skipA(str,0,newString);
}