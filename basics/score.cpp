// #include<iostream>
// using namespace std;
// int main()
// {
//     int score;
//     cout<<"value of score: ";
//     cin>>score;

//     if (score>80)
//     {
//         cout<<"excellent"<<endl;

//     }
//     else if(score>50)
//     {
//         cout<<"can improve"<<endl;

//     }
//     else{
//         cout<<"average"<<endl;

//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a ;

    int* p = &a;
    *(p) = 999;
    delete p; // here delete keyword dones't work ----> why?
    cout<<"the value of a is "<<*(p)<<endl;


    // new keyword
    int *ptr = new int(40);
    // delete ptr;
    cout<<"the value at address p is  "<<*(ptr) <<endl;


    int *arr= new int[4];

    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    arr[3] = 40;

    // delete[] arr; // we can delete dynamicly allocated int or float with this opeator
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;


    // delete operator


return 0;
}