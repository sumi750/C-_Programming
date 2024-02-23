#include<iostream>
using namespace std;
// Selctionsort--done
// Bubble Sort--done
// Insertion Sort--done
// Merge Sort
// Quick Sort
// Radix Sort
void selction(int arr[], int size){
    int min_ind;

    for(int i = 0; i<size-1; i++){
        min_ind = i;

        for (int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        if(min_ind != i){
            int temp = arr[min_ind];
            arr[min_ind] = arr[i];
            arr[i] = temp;
        }
        
    }
}

// printing 
void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
        // cout<<endl; 
    }
    cout<<endl;
    
}
int main()
{
    // selection sort : select smallest element and swaping with leftmost unsorted element than do this again and agin
    // TC - O(2^n)
    // passes = n-1;
    int arr[5]  = {45,12,47,95,32};
    int n = 5;
    print(arr, n);
    // selxtion sort
    cout<<"selction sort"<<endl;
    selction(arr, n);
    print(arr, n);

return 0;
}