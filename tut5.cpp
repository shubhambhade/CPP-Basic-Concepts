// input - output
// << --> insertion operator.
// >> --> extraction operator.
#include<iostream>
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;

    int add = a + b;
    cout<<"Addition : "<<add;
    return 0;
}