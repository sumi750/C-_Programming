#include<iostream>
using namespace std;

// forward declaration
class complex;

class calculator{
    public:
    int add (int a, int b){
        return ( a + b);
    }
    int sumrealcomplex(complex , complex );
    int sumcompcomplex(complex , complex);
    
};

class complex{
    int a,b;
    // individually declaring funciotn as freinds
    // friend int calculator :: sumrealcomplex(complex , complex );
    // friend int calculator :: sumcompcomplex(complex , complex);
     // freind funtion decelration

    // aliter : declaring the entire calculator as friend
    friend class calculator; 

    public:
    void setnumber(int n1, int n2){
        a = n1 ;
        b = n2;

    }
    void printnumber(){
        cout<<"your number is  "<< a<< " +"<<b<<"i"<<endl;

    }
};

int calculator :: sumrealcomplex(complex o1, complex o2){
    {
        return (o1.a + o2.a);
    }
}
int calculator :: sumcompcomplex(complex o1, complex o2)
{
    {
    return ( o1.b + o2.b);
    }
}

int main()
{
    complex o1, o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator cal;
    int res = cal.sumrealcomplex(o1, o2);
    int res1 = cal.sumcompcomplex(o1, o2);
    cout<<"the sum of real part of o1 and o2 is  "<<res<<endl;
    cout<<"the sum of imaginary part of o1 and o2 is  "<<res1<<"i"<<endl;

return 0;
}