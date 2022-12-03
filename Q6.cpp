//Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    float Average,total;
    cout<<"enter the three numbers"<< endl;
    cin>>n1>>n2>>n3;
    Average=n1+n2+n3;
    total=Average/3;
    cout<<"Area of circle ="<<total;
    return 0;
}
