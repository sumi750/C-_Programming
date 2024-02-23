#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter a n"<<endl;
    cin>>n;
    // cout<<"enter value of m"<<endl;
    // cin>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" * ";

        }
        

        cout<<endl;

    }
    

return 0;
}