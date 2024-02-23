#include<iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout<<"enter the value of cp:";
    cin>>cp;
    cout<<"enter the value of sp";
    cin>>sp;
    

    if (sp>cp)
    {
        int profit = sp-cp;
        cout<<"your profit is :"<<profit<<endl;

    }
    else if(cp>sp)
    {
        int loss = cp-sp;
        cout<<"your loss is :"<<loss<<endl;

    }
    else{
        cout<<"no profit no loss";
    }

    
}