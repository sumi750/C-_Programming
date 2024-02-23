#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPRICE[100];
    int counter;
    public:
    void initcounter(void)
    { counter=0;}
    void setPRICE (void);
    void displayPRICE (void);

};
    
    void shop :: setPRICE(void)
    {
        cout<<"enter id of ur item:"<<counter+1<<endl;
        cin>>itemID[counter];
        cout<<"enter the price of item "<<endl;
        cin>>itemPRICE[counter];
        counter ++;   
    }

    void shop :: displayPRICE(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout<<"the item id is "<<" "<<itemID[i]<<"and the price is "<<" "<<itemPRICE[i]<<endl;
        }
        
    }
    

int main()
{
    // int n;

    shop dukan;
    // int n;
    dukan.initcounter();
    
    
    dukan.setPRICE();
    dukan.setPRICE();
    dukan.setPRICE();
    dukan.displayPRICE();
    
return 0;
}