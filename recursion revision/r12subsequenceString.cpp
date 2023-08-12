#include<iostream>
#include<string>
using namespace std;

//printing subsequence in a string

void printSubSeq(string str,string op)
{
    if(str.length()==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(str[0]);
    str.erase(str.begin()+0);
    printSubSeq(str,op2);
    printSubSeq(str,op1);
}

int main()
{
    string str="abc";
    string op="";
    printSubSeq(str,op);
}