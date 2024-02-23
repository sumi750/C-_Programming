#include<iostream>
#include<string>
using namespace std;
// nesting of member function
// using funciton inside the funvtion
class binary{
    private:
    string s;
    void chk_binary(void);
    // void ones_compliment(void);
    public:
    void read(void)
    {
        cout<<"enter the binary number:"<<endl;
        cin>>s;
    }
    // void chk_binary(void);
    void ones_compliment(void);
    void display(void);
    void ddisply(void);
    void d2diplay(void);


};

    void binary :: chk_binary(void)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout<<" Incorrect binary number "<<endl;
                exit(0);
            }
        }
        
    }
    void binary :: ones_compliment(void)
    {
        chk_binary();
        for (int  i = 0; i < s.length(); i++)
        {
            if ( s.at(i) == '0')
            {
                s.at(i) = '1';

            }
            else{
                s.at(i) = '0';
            }
        }
        
    }

    void binary :: display(void){
        // ones_compliment();
        cout<<"displaying your binary bumber"<<endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout<< s.at(i);
        }
        cout<<endl;
        
    }
    void binary :: ddisply(void){
        cout<<"the ones compliment of this number is "<<" "<<s<<endl;
    }
    void binary :: d2diplay(void){
        cout<<"the two's compliment of the number is "<<" "<<s<<endl;
    }
int main()
{
    // oops ----> class and object
    binary b;
    b.read(); // call the funciton of class 
    // b.chk_binary();
    b.display();
    b.ones_compliment();
    b.ddisply();
    b.ones_compliment();
    b.d2diplay();

return 0;
}