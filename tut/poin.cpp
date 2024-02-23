#include<iostream>
using namespace std;
int main()
{
    // What is a pointer? --> data data type holds the addres of other data type
    int a = 3;
    int* b = &a;
    // & is address of operator
    cout<<"the addres of a is"<<" "<<b<<endl;
     cout<<"the addres of a is"<<" "<<&a<<endl;
    
    // * is Derefrence operator
    cout<<"the value of at addres b is"<<*b<<endl;

return 0;
}