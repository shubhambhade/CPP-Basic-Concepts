#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 4;
    cout<<"Operators in cpp "<<endl;
    // Airthmetic Operator
    cout<<"Airthmetic Operator"<<endl;
    cout<<"The value of a + b is : "<<a + b<<endl;
    cout<<"The value of a - b is : "<<a - b<<endl;
    cout<<"The value of a * b is : "<<a * b<<endl;
    cout<<"The value of a / b is : "<<a / b<<endl;
    cout<<"The value of a % b is : "<<a % b<<endl;

    // increment , decrement operator
    cout<<" a++ : "<< a++ <<endl;
    int c = 2;
    cout<<" ++c : "<< ++c <<endl;
    cout<<" --a : "<< a-- <<endl;
    int d = 3;
    cout<<" --d : "<< --d <<endl;

    //Comparision Operator
    cout<<"Comparision Operator"<<endl;
    cout<<"The value of a==b is : "<< (a == b) <<endl;
    cout<<"The value of a!=b is : "<< (a != b) <<endl;
    cout<<"The value of a<b is : "<< (a > b) <<endl;
    cout<<"The value of a<=b is : "<< (a <= b) <<endl;
    cout<<"The value of a>b is : "<< (a < b) <<endl;
    cout<<"The value of a>=b is : "<< (a >= b) <<endl;
    
    //Logical Operator
    cout<<((a==b)&&(a<b))<<endl;
    cout<<((a==b)||(a>b))<<endl;
    cout<< !(a==b) ;
    return 0;
}