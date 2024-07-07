#include<iostream>
using namespace std;

// for loop
void for_loop()
{
    cout<<"For loop"<<endl;
    int i, n;
   cout<<"Enter number : "<<endl;
   cin>>n;
   for( i  = 1; i <= n; i++ )
{
    cout<<"I : "<<i<<endl;
}
}
// while loop
void while_loop()
{
    cout<<"while loop "<<endl;
    int i = 1 , n;
    cout<<"Enter number : ";
    cin>>n;
    while(i <= n)
    {
        cout<<"I : "<<i<<endl;
        i++;
    }
}
// do while loop
void do_while_loop(){
    cout<<"do-while loop "<<endl;
    int i = 1 , n;
    cout<<"Enter number : ";
    cin>>n;
    do{
        cout<<"Hello world"<<endl;
        i++;
    }
    while( i <= n);

}
int main()
{
    for_loop();
    while_loop();
    do_while_loop();
    return 0;
}