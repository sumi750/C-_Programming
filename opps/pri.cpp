#include<iostream>
using namespace std;
class B{
    int a;
    public:
    int b, c;
    void get_abc();
    int get_a();
    void show_a();


};

void B :: get_abc(){
    cout<<"enter the values of a :" ;
    cin>>a;
    cout<<"enter the values of b : " ;
    cin>>b;
    cout<<"enter the values of c : " ;
    cin>>c;
}
int B :: get_a(){
    return a;

}

void B :: show_a(){
    cout<<" a is equal to : --> " <<a<<endl;
}

class D : private B{
    int d;
    public:
    void mul(void ){
        get_abc();
        d = c*get_a();

    } 
    void display();


};

void D :: display(){
    show_a();
    cout<<" b is equal to : ---> "<<b<<endl;
    cout<<" c is equal to : ---> "<<c<<endl;
    cout<<" d is equal to : ---> "<<d<<endl;

}

int main()
{
    D t;
    // t.geta_abc(); WON'T WORK
    t.mul();
     // t.show_a(); wont'work
    t.display();

    // t.c = 45;  c become private in d class

    t.mul();
    t.display();

return 0;
}