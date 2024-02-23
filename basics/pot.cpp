#include<iostream>
using namespace std;
int  print(int *p){
    *p = *p + 1;
    return *p;
}
int getSum(int *arr, int n ){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    // int *p = 0;
    // cout<< *p <<endl;
    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout<< p<<endl;
    // cout<< *p<<endl;

    // int arr[10] = {12,45,78};
    // cout << sizeof(arr) <<endl;
    // int *p = &arr[0];
    // cout << *p <<endl;
    // cout << sizeof(*p)<<endl;
    // cout<< (arr)[0] << endl;
    // cout<<"Adrees of first memory block " << &arr[0] <<endl;
    // cout<< *arr <<endl; // 0th position
    // cout<< *( arr + 1) <<endl; // 1st position
    // cout<< *( arr + 2) <<endl; // 2nd postion
    // int i = 2;
    // cout << i[arr] << endl;
    // char ch [6] = "xudvv";
    // char *c = &ch[0];
    // cout<< *c <<endl;

    // value updation
    int value = 5;
    int *p = &value;
    cout << "before "<< *p <<endl;
    print(p);
    cout <<"after " << *p <<endl;
    
    int arr[6] = {1,2,3,4,5, 6};

    cout << "sum is " <<getSum(arr + 2, 4) << endl;

return 0;
}