//Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers"<< endl;
    cin>>a>>b;
    if(b<a)
    {
      cout<<"greater number is"<<"a="<<a;
    }
    else
    cout<<"greater number"<<"b="<<b;
    return 0;
}
