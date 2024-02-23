#include<iostream>
using namespace std;
template < typename T, typename S>
S swap (T x , S y)
{
    return (x + y);
}
int main()
{
    // int a , b;
    // cin>>a>>b;
    // cout<<"before swaapinf a is "<<a<< " and b is "<<b<<endl;
    cout<<"after swaping "<<swap<int , float> (78, 56.2)<<endl;
return 0;
}