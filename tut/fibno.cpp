#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, i , num;
    cout<<"enter the value of num: ";
    cin>>num;
    cout<<"The fibnoci series is"<<" "<<a<<" "<<b<<" ";

    for (int i = 2; i < num; i++)
    {
        /* code */
        c = a+b;;
        cout<<c<<" ";
        a = b;
        b = c;

    }

    
return 0;
}
