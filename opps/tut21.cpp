#include<iostream>
using namespace std;
class empoloyee{
    private:
    int a, b, c;
    public:
    int d, e;
    void setDATA (int a1, int b1, int c1); // decleartion
    void getDATA ()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of f is "<<e<<endl;
    }


};


void empoloyee :: setDATA(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}


int main()
{
    empoloyee sumit;
    sumit.d = 45;
    sumit.e = 50;
    sumit.setDATA(1,2,4);
    sumit.getDATA();

return 0;
}