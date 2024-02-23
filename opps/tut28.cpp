#include<iostream>
using namespace std;
class Y; // forward declration
class X{
    int data;
    public:
    void setvalue(int value){
        data = value;

    }
    friend void add(X , Y);

};
class Y{
    int num;
    public:
    void setvalue(int value){
        num = value;
    }
    friend void add (X,Y);
};
void add(X o1, Y o2){
    cout<<"summig datas of X and Y objects gives me " << o1.data + o2.num;
}

int main()
{
    X a;
    a.setvalue(3);
    Y b;
    b.setvalue(45);

    add (a, b); // calling friend funtion
return 0;
}