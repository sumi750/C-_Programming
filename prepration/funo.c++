

// // #include<iostream>
// // using namespace std;
// // class Animal {
// //     public:
// //     void hello(){
// //         cout<<"eating..."<<endl;

// //     }
// // };

// // class Men : public Animal{
// //     public:
// //     void hello(){
// //         cout<<"walking..."<<endl;
// //     }
// // };
// // int main()
// // {
// //     Animal A = Animal();
// //     A.hello();
// //     Men M = Men();
// //     M.hello();
// // return 0;
// // }

// #include<iostream>
// using namespace std;
// class overload{
//     public:
//     int ADD(int x , int y){
//         return x+y;

//     }

//     float ADD(float a, float b){
//         return a + b;

//     }
//     int ADD(){
//         string a = "hello";
//         string b = "sumit";
//         string c = a+b;
//         cout<<"the string sum is : "<<c<<endl;

//     }

// };
// int main()
// {
//     overload obj;
//     cout<<obj.ADD(45,78)<<endl;
//     // cout<<obj.ADD(12.4,14.2)<<endl;
//     obj.ADD();
// return 0;
// }


#include<iostream>
using namespace std;
template < class X , class Y>
class demo{
    private:
    X num1;
    Y num2;
    public:
    demo( X n1, X n2){
        num1 = n1;
        num2 = n2;

    }
    void check(){
        if (num1>num2){
            cout<<"num1 is largest value"<<num1<<endl;
        }
        else{
            cout<<"num2 is largest value "<<num2<<endl;
        }
    }
};
int main()
{   
    demo <float, int> obj1(55.2, 45);
    obj1.check();
    demo <int, float> obj2(78,90.3);
    obj2.check();
return 0;
}