#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the value of a: ";
    cin>>ch;
    if ( ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        /* code */
        cout<<"the given char is vowel"<<endl;
    }
    else{
        cout<<"the given char is consonats";
    }
return 0;
}