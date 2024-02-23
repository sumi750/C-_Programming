#include<iostream>
using namespace std;
int moneyReceived( int currentmoney , float factor = 1.04) // 
{
    return  currentmoney*factor;
}
int main()
{
  int money = 10000;
  cout<<"if the money"<<money<<" RS in your bank account, you will recieve"<<moneyReceived(money)<<"Rs after 1 year"<<endl; 
return 0;
}