#include<iostream>
using namespace std;

class base{
    int data1; // private by defalut is not inhertable

// data1 private member hai ise hum membeer function banake ecces kar sakte hai 

    public:
    int data2;
    void set_data()
    {
        data1 = 100;
        data2 = 456;
    }
    int get_data1();
    int get_data2();

};

int base :: get_data1(){
         return data1;

}
int base :: get_data2(){
         return data2;

}


class derived: private base
{
    int data3;
    public:

    void process();
    void display();
};

void derived :: process(){
    set_data();
    data3 = data2*get_data1();
    
}
void derived :: display(){
    cout << "value of data 1 is "<<get_data1()<<endl;
    cout << "value of data 2 is "<<data2<<endl;
    cout << "value of data 3 is "<<data3<<endl;
}

int main()
{
    derived der;
    // der.set_data(); // direct call nhi kar sakte kuki ab ye private function ban chka hai 
    
    der.process();
    der.display();

return 0;
}