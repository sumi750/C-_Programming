#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(int , int);
    void printnumber(){
        cout<<"your number is  "<<a<<" +"<<b<<"i"<<endl;

    }

    
};

complex:: complex(int x, int y) // paramerized constructor as it takes 2 parameters
{
    a = x;
    b = y;

}


int main()
{
    // implicit  call
    complex a ( 10,44);
    a.printnumber();

    // explicit call
    complex b = complex(45,78);
    b.printnumber();

return 0;
}

