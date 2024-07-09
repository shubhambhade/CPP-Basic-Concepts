// pointer concept :
// pointer is data type which holds the address 
// of other data types.
#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int * b = &a; // & --> address of operator
    
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * -- > (value at) dereference operator
    cout<<"The value at address of a is "<<*b<<endl;
 return 0;
}