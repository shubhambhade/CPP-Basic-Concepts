//constant manupulators

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 34;
    cout<<"The value of a was :"<<a<<endl;
    a = 45;
    cout<<"The value of a is :"<<a<<endl;

    const int  b = 4; // constant cannot be change
    cout<<"The value of b is :"<<b<<endl;


// manipulators in cpp
    int x = 3, y = 34, z = 1234;
    cout<<"The value of x is without setw : "<<x<<endl;
    cout<<"The value of y is without setw : "<<y<<endl;
    cout<<"The value of z is without setw : "<<z<<endl;

    cout<<"The value of z is : "<<setw(4)<<x<<endl;
    cout<<"The value of z is : "<<setw(4)<<y<<endl;
    cout<<"The value of z is : "<<setw(4)<<z<<endl;

    // operator precedence
    int p = 3, q = 4;
    int r = (p*5)+q;
    cout<<"R : "<<r;
    return 0;
}