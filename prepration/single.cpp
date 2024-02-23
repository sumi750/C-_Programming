#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void set_data(){
        data1 = 100;
        data2 = 200;

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

class derived : public base {
    int data3;
    public:
    void process(){
        data3 = data2 *get_data1(); 
    }
    void display(){
        cout<<"value of 1 is "<<get_data1()<<endl;
        cout<<"value of 2 is "<<data2<<endl;
        cout<<"value od 3 is "<<data3<<endl;
    }
};

int main(){
    derived der;
    der.set_data();
    der.process();
    der.display();
}