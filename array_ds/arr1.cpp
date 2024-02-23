#include<iostream>
using namespace std;
// printing the array with the help of funcitons
void printARRy(int arr[], int size){
    cout<<"printing the array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing done";
    
}
int main()
{   int a[5] ={45,12,54,11,65};
    cout<<a[4]<<endl;
    int arrr[5] = {45,78,98,74,12};
    int n = 4;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<arrr[i]<<" "<<endl;
    }

    int arr[5] ={78,98,45,41,32};
    int m = 5;
    printARRy(arr, m );
    int arrsize = sizeof(arr);
    cout<<arrsize;
    char ch[5] = {'a', 'd', 's', 'r', 'q'};
    int y = 5;
    for (int i = 0; i < y; i++)
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    // inputing the aray
    int input[5];
    int ss=5;
    cout<<"input the value of array";
    for (int i = 0; i < ss; i++)
    {
        cin>>input[i];
        // cout<<input[i]<<endl;
    }
    // cout<<"print array"<<endl;
    printARRy(input, ss);
    
    return 0;
}