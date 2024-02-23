#include<iostream>
using namespace std;
// dynamic initizlization of the object means that the object is initialized at the run time. dynamic inilization of the object using a conductor is benefical when the data is of diffrent forms.

class Bankdeposit{
    int principal;
    int years;
    float intresetrate;
    float returnVAlue;
    public:
    Bankdeposit(){} // defaltut constructor 
    Bankdeposit(int p, int y, float r); // r can be a value like 0.04
    Bankdeposit(int p, int y, int r); // r can be a value like 4
    void show(void);
};
    Bankdeposit :: Bankdeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        intresetrate = r;
        returnVAlue = principal;
        for (int i = 0; i < y; i++)
        {
            returnVAlue = returnVAlue * ( 1+intresetrate);
        }
        
    }
    Bankdeposit :: Bankdeposit(int p, int y, int r)
    { 
        principal = p;
        years = y;
        intresetrate = float(r)/100; // converting in float 
        returnVAlue = principal;
        for (int i = 0; i < y; i++)
        {
            returnVAlue = returnVAlue * ( 1 + intresetrate);
        }
    }
    void Bankdeposit :: show (){
cout<<endl<<" principal amount was  "<<principal<< " . return value after  "<<years<<" years is "<<returnVAlue<<endl;

    }
int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"enter the value of principal ";
    cin>>p;
    cout<<"enter the value of years";
    cin>>y;
    cout<<"enter the value of intresrate";
    cin>>r;
    bd1 = Bankdeposit( p , y , r);
    bd1.show();
    cout<<"enter the value of principal: ";
    cin>>p;
    cout<<"enter the value of years: ";
    cin>>y;

    cout<<"enter the value of intresrate: ";
    cin>>R;
    bd2 = Bankdeposit( p , y , R);
    bd2.show();
return 0;
}