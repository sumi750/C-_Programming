#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    void get_data(){
        cout<<"the real part is  "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

    }
    void set_data(int a, int b){
        real = a;
        imaginary = b;

    }

};
int main()
{

    // complex c1; ("sumit")

    // complex *ptr = &c1;

    complex *ptr = new complex [3];

    // (*ptr).set_data(1, 54); same as
    ptr->set_data(4,54);
    (*ptr).get_data();



    //  array of object
    complex *ptr1 = new complex [3];

    // (*ptr).set_data(1, 54); same as
    ptr1->set_data(4,40);
    (*ptr1).get_data();
return 0;
}