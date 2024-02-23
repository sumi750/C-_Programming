#include<iostream>
using namespace std;
// example from refrence book for public member single inheritance
class sumit {
    int a; // private 
    public:
    int b;
    void set_ab(){
        a = 5;
        b = 10;

    }
    int get_a(){
        return a;

    }
    void show_a(){
        cout<<"a = "<< a <<endl;
    }

};
class me : public sumit   // public derivation
 {
    int c ;
    public:
    void mul();
    void display();
};

void me :: mul(){
    c = b*get_a();
}

void me :: display(){
    cout<<"a = "<<get_a()<<endl;    
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main()
{
me sk;

    sk.set_ab();
    sk.mul();
    sk.show_a();
    sk.display();

    sk.b = 20;
    sk.mul();
    sk.display();

return 0;
}