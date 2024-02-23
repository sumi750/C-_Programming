#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    
        int n1 = mid - l+1;
        int n2 = r-mid;
        // int i, j, k;
        // Create temp array for coping the data
        int L[n1], M[n2];
        for(int i = 0; i<n1; i++){
            L[i] = arr[l+ i];
        }
        for(int j=0; j<n2; j++){
            M[j] = arr[mid +1 + j];
        }

        // Maintain current index of subarray and main array
        int i,j,k;
        i = j = 0;
        k = l;

        while(i<n1 && j<n2){
            if(L[i] <= M[j]){
                arr[k] = L[i];
                i++;
            }
            else{
                arr[k] = M[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            arr[k] = L[i];
            i++;
            k++;

        }

        while(j<n2){
            arr[k]= M[j];
            j++;
            k++;
        }
    }

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{   int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the elements of array : ";
    int arr[size];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    printArray(arr,size);
   mergeSort(arr, 0, size-1);
   cout<<" Sorted Array"<<endl;
   printArray(arr, size); 

return 0;
}