#include<iostream>
using namespace std;
// protected access modifier in C++
class base
{
    // protected: a variable which can inherted
    protected:
    int a;
    private: 
    int b;
    public:
    void show(){
        cout<<"this is the program on protected acces modifer";
    }


};
/* for a protected member 
                        public derivation   private derivation      protected derivation  
 1. private members     not inherited       not inherited           not inherited
 2. protected members   protected           private                 protected
 3. public members      public              private                 protected
*/

class derived : protected base{

};
int main()
{
    base b;
    derived d;
    // cout<<b.a; // not run or call becacue it is protected in base class
    // cout<<d.a; also not run because int a become protected in derived class
    b.show();

return 0;
}
