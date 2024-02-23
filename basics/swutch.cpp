#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"enter the opread";
    cin>>op;

    switch (op)
    {
    case '+' : 
        cout<<"the sum of a and b is "<<a+b<<endl;
        break;
    case '-':
    cout<<"the subtacrtion of a and b is "<<a-b<<endl;
        break;
    case '*':
        cout<<"the multiplication of a and b is "<<a*b<<endl;
        break;
    case '/':
        cout<<"the divison of a and b is "<<a/b<<endl;
        break;
    default:
    cout<<"you press wrong key";
        break;
    }

    int num;
    int dv=3;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    cout<<"the value of dv is "<< dv <<endl;
    switch (dv*num % 2 == 0)
    {
    case true: 
        cout<<"value is divisle by 2 and gives rmeinder 0"<<endl;
        break;

    default:
        cout<<"value is not divisble by 2";
        break;
    }

    return 0;
}