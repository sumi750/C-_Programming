#include<iostream>
using namespace std;
int main()
{
    int a, b, result;
    cout<<"enter the value of a and b: "<<endl;
    cin>>a>>b;
    try
    {
        if(b !=  0)
        {
            result = a/b;
            cout<<"result: "<<endl;
        }
        else throw (b);
    }
    catch(int number )
    {
        cout<<"zero is not allowed";
    }
    
return 0;
}