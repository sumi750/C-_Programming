#include<iostream>
using namespace std;
class complex{
    int a, b;

    /* creating a constructor , invoked = calling
    constructor is a special member function with the same name as the class . 
    It is used to initilize the objects of its class , 
    it is automatically invoked whenever an object is created. */

    public:

    complex (void) // default constructor as it takes no parameters
        {
        a = 10;
        b = 20;
        a++;
        b++;


    }
    void print_number(){
        cout<<"your number is  "<<a<<" + " <<b<<"i"<<endl;
    }

};
// complex :: complex (void){
//     a = 10;
//     b = 0;

// }
int main()
{
    complex c1, c2;
    c1.print_number();
    // c2.print_number();
return 0;
}

// properties of constructor
/*
1. It should be declared in the public section of the class .
2. they are automatically invoked whenever the object in created.
3. do not have return types and also a return value.
4. it can have defalut arguments
5. we can't refer to their address.
*/