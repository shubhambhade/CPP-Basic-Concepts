// break and continue statement
#include<iostream>
using namespace std;

void break_statement(){
 cout<<"Break statement "<<endl;
 for( int i = 1; i <= 10; i++)
 {
    if(i == 3)
    {
        break; // exit the loop
    }
    cout<<"I : "<<i<<endl;
 }
}
void contunue_statement(){
    cout<<"continue statement"<<endl;
    for( int i = 1; i <= 10; i++)
 {
    if(i == 3)
    {
        continue; //skip this condition.
    }
    cout<<"I : "<<i<<endl;
 }
}
int main()
{
    break_statement();
    contunue_statement();
    return 0;
}
