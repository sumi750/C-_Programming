// solving ambiguity resulotion in inheritance
#include<iostream>
using namespace std;
class base1 {
        public:
        void greet(){
            cout <<"this greet for multiplication "<<endl;
            int a,b, product;
            cout<<"enter the value of a and b"<<endl;
            cin>>a>>b;
            product = a*(b);
            cout<<"the product is "<<product<<endl;


        }
    };
class base2 {
    public:
    void greet(){
        cout<<"kaise hoo?_ _ _ _this greet for additoion "<<endl;
        int a, b, sum;
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
        sum = a+ b;
        cout<<"the adduitn is  "<<sum<<endl;
    }
};

class derived : public base1, public base2
{
    int a;
    public:
    void greet() // overrides greet() of base1 and base2
    {
        base2 :: greet();  
        // base1 :: greet();  
        
    }
};




class B{
        public:
        void say(){
            cout<<"hello world"<<endl;
        }
};
class D : public B{
    int a;
    // D' s new say method will override base class's say() 
        public:
        void say(){
            cout<<"hello world i am sumi "<<endl;
        }
};

int main()
{
    // ambiguity 1
    // base1 baseobj1; 
    // base2 baseobj2;
    // baseobj1.greet();
    // baseobj2.greet();
    
    derived sumi; // derived class object
    sumi.greet();
    sumi.base1 :: greet();  // invoke greet with scope resolktupon opeartie 



    // ambiguity 2
    // B b;
    // b.say();


    // D d;
    // d.say();
return 0;
}