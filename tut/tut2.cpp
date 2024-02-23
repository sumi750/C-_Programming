#include<iostream>
using namespace std;

//  typedef struct employee
// {
//     /* data */
//     int id;
//     char favCHAR;
//     float salary;
// } ep;   // ep = struct employee
 union money
{
    /* data */
    int rice; // 4 btye
    char car; // 1 byte
    float pounds; //4 byte
};  

int main()
{
    // ep sumit;
    // struct employee himashu;
    // struct employee krish;
    // sumit.id = 1;
    // sumit.favCHAR= 'c';
    // sumit.salary = 12563;
    // cout<<"The value is "<<sumit.salary<<endl;
    // cout<<"The value is "<<sumit.favCHAR<<endl;
    // cout<<"The value is "<<sumit.id<<endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;

return 0;
}