#include<iostream>
using namespace std;

// friend funtion can be called by refrence


class complex{
    int a, b;
    public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber(){
        cout<<"your number is  "<<a<< " + "<<b<<"i"<<endl;
    }
    friend complex sumcomplex(complex o1, complex o2); // freind funciton decleration
};
    // bleow line means that non member ---> sumcomplex funtion is allowed to do anything with my private member
    complex sumcomplex(complex o1, complex o2) // friend funtion defenation.
    {
        complex o3;
        o3.setnumber ((o1.a + o2.a) , (o1.b + o2.b));
     return o3;   
    }

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(5,8);
    c1.printnumber();
    
    sum = sumcomplex(c1, c2); 
    sum.printnumber();
return 0;
}
// properties of friend funtions
/*
1. Not in the scope of the class. need to specife for excess under the scope of class
2. since this is not in the scope of class , it can't be called from the object of that class . c1.sumcomplex() == invalid
3. usally conatins the object as arguments
4. can be declerd in private as well as in public part.

*/