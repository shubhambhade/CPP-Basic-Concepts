#include<iostream>
using namespace std;

void if_else_statement()
{
    int age;
    cout<<"Enter your Age : "<<endl;
    cin>>age;
    if(age < 0)
    {
        cout<<"Enter valid age";
    }
    else if (age<18)
    {
        cout<<"you Cannot vote";
    }
    else
    {
        cout<<"You can vote";
    }
}
void switch_case_statement()
{
    int _age;
    cout<<"Enter your Age : "<<endl;
    cin>>_age;

    switch(_age)
    {
        case 18 :
        cout<<"You are 18 "<<endl;
        break;

        case 22:
        cout<<"You are 22"<<endl;
        break;

        default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
}
int main()
{
    if_else_statement();
    switch_case_statement();
    return 0;
}