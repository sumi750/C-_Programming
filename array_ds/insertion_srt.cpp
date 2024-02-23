#include<iostream>
using namespace std;

void printAy(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void inser(int arr[], int size){
    for(int i = 1; i<size; i++){
        int key = arr[i];   // 1st index number
        int j = i-1;    // 0th index number

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j]; // shifting of greter number ahead of current pos
            j--;

        }
        arr[j+1] = key;

    }
}


int main()
{
    int size;
    cout<<"Enter the value of size ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements of Array ";
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    printAy(arr, size);
    inser(arr, size);
    printAy(arr, size);
return 0;
}