#include <iostream>
using namespace std;
int a = 23; // global variable

void sum()
{
    int a = 13; // local variable
    cout<<"\nA : "<<a;
}
int main()
{
    int a = 10; 
    cout<<"A : "<<a<<endl;
    float b = 12.33;  
    cout<<"B : "<<b<<endl;
    double c = 12.3456;
    cout<<"C : "<<c<<endl;
    bool d = true;
    cout<<"D : "<<d<<endl;
    char e = 'A';
    cout<<"E : "<<e;
    sum();
    cout<<"\nA : "<<a;
    return 0; 
}

