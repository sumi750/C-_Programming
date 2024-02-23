#include<iostream>
using namespace std;
// int sum(int a, int b){
//     int c;
//     c = a+b;
//     return c;
// }
// funciotn prototype  (declering funtion is in the scope of program)
// type funciton-name(arguments);
int sum(int a, int b); // -----> Acceptable
int sum(int , int); // ----> Acceptable
 void g( void );
int main()
{
    int a,b;
    // int a and b are accutal parameters
    cout<<"enter the value of a "<<" ";
    cin>>a;
    cout<<"enter the value of b"<<" ";
    cin>>b;

    cout<<"the value of sum is "<<sum( a, b)<<endl;
    g();
return 0;
}
int sum(int a, int b)
//here  a and b called formal parameters whuich will taking value from  actual parameters
{
    int c;
    c = a+b;
    return c;
}
void g(){
    cout<<"hello everyone , good morning";

}



