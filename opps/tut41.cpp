// //multi-level inheritance
// #include<iostream>
// using namespace std;
// class b{
//     public:
//     static int add(int a, int b){
//         return a+b;

//     }
//     static int add(int a, int b, int c){
//         return a+b+c;
//     }
//     static int add(int a, int b, int c, int d){
//         return a+b+c+d;
//     }

    
// };

// int main()
// {
//     b C;
//     cout<<C.add(10,20)<<endl;
//     cout<<C.add(10,20,30)<<endl;
//     cout<<C.add(10,20,30,40);
// return 0;
// }





//  Mulitiple inherate -----> a derived class with more than one base class

#include<iostream>
using namespace std;
//  Sntax -----> class derived : visibilty-  mode base1, visibility mode base-2{
//     class body of class "derived c"
// }
class base1{
    protected: 
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};
class base2{
    protected: 
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b;
    }
};

class derived : public base1, public base2
{
    public:
    void show(){
        cout<<" the value of base1 is  "<<base1int<<endl;
        cout<<" the value of base2 is  "<<base2int<<endl;
        cout<<"the sun of these value is  " << base1int + base2int <<endl;
        
    }

};
int main()
{
    int a,b;
    cout<<"put the value of a"<<endl;
    cin>>a;
    cout<<"put the value of b"<<endl;
    cin>>b;
    derived sumit;
    sumit.set_base1int(a);
    sumit.set_base2int(b);
    sumit.show();

return 0;
}