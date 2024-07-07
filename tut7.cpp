#include<iostream>
using namespace std;

int c = 45;
int main()
{
    // *********build in datat types**********
    int a, b, c;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    c = a - b;
    cout<<"C : "<<c;
    
    cout<<"\nGlobal variable C : "<<::c;
    
    // **************float , double, long double Literals*************
    float d = 34.24F;
    long double e = 34.23;
    cout<<"The size of 34.24 is "<<sizeof(34.24)<<endl;
    cout<<"The size of 34.24f is "<<sizeof(34.24f)<<endl;
    cout<<"The size of 34.24F is "<<sizeof(34.24F)<<endl;
    cout<<"The size of 34.23l is "<<sizeof(34.24l)<<endl;
    cout<<"The size of 34.23L is "<<sizeof(34.24L)<<endl;
    cout<<"The value of D : "<<d<<endl;
    cout<<"The value of E : "<<e<<endl;

    // *********reference variables*********
    float var = 455;
    float & y = var;
    cout<<var<<endl;
    cout<<y<<endl;

    // *************Type casting*************
    int x = 45;
    float z = 45.45;
    cout<<"The value of A is : "<<x<<endl;
    cout<<"The value of A is : "<<float(x)<<endl;
    cout<<"The expression is "<<x + z<<endl;
    cout<<"The expression is "<<x + (int)z<<endl;
    cout<<"The expression is "<<x + int(z)<<endl;
    return 0;
}

