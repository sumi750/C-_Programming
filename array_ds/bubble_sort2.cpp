#include<iostream>
using namespace std;

void printArr(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void buuble(int arr[], int size){
    int temp;
    for(int i=0; i<size; i++)  // Number of passes
    {
        for(int j = 0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main()
{   
    int size;
    cout<<"Enter the value of n ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements of Array ";
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    printArr(arr,size);   // Printing Before the Sorting
    buuble(arr, size);  // Sorint operation
    cout<<"Sorted Array is ";
    printArr(arr,size);   // Printing After Sorting
return 0;
}