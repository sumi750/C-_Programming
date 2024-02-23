#include<iostream>
using namespace std;
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
void delti(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100] = {45,78,25,14,96,12};
    int size = 6;
    int index;
    display(arr, size);
    cout<<"enter the index which u want to dleete"<<" ";
    cin>>index;
    delti(arr, size, index);
    size -= 1;
    display(arr, size);
    
return 0;
}