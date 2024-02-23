#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"value of a "<<a<<endl;
    
    cout<<"value of b"<<b<<endl;
   
    
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"swap value of a is :"<<a<<endl;
    cout<<"swap value of b is :"<<b<<endl;
    cout<<"hello world"<<endl;
    cout<<"namaste duniya"<<endl;
    bool bl = true;
    cout<<bl<<endl;
    int size = sizeof(a);
    cout<<"size of a is "<<size<<endl;
    int x = 'a';
    cout<<x<<endl;
    // char y = 123456;
    // cout<<y<<endl;
}