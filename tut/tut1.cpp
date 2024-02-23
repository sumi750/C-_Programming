#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int marks[4] = { 78,25,36,45};
    cout<<"the marks of students"<<endl;
    // for (int i = 0; i < 4; i = i+1)
    // {
    //     /* code */
    //     cout<<i<<" "<<"is"<<marks[i]<<endl;
    // }
    
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p--)<<endl;
    // cout<<"the value of marks [0] is "<<*p<<endl;
    // cout<<"the value of marks [0] is "<<*(p+1)<<endl;
    // cout<<"the value of marks [0] is "<<*(p+2)<<endl;
    // cout<<"the value of marks [0] is "<<*(p+3)<<endl;
return 0;
}