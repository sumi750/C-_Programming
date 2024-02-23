#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;

    if(a>b){
        cout<<" a is gretaer"<<endl;
    }
    else{
        cout<<"b is grater"<<endl;
    }
    // a = cin.get();
    // cout<<" value of a is "<<a<<endl;
    int x;
    cin>>x;
    int i =1;
    int sum = 0;
    while(i<=x){
        sum = sum +i;
        i++;
    }
    cout<<"value of sum is "<<sum <<endl;
    int k;
    cin>>k;
    int z = 1;
    while(z<=k){
        int j = 1;
        while(j<=k){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        z++;
    }

return 0;
}