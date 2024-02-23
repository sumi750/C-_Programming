#include<iostream>
using namespace std;
//Trasnversal Array
void display(int ar[], int n){
    for(int i = 0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
// Binary Search Array 
int binaSear(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    while ((start <= end) && (arr[mid] != key))
    {
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = (start+end)/2;
    }
    if (start>end)
    {
        return -1;
    }
    else{
        return mid;
    }
}
// Linear Search
bool linaer_search(int arr[], int size, int key){
    int k;
    for (int k = 0; k < size; k++)
    {
        if (arr[k] == key)
        {
            return 1;
        }
        
    }
    return 0;
}
// Insertion Operation
int indInsertion(int ar[], int size, int element, int capacity, int index){
    if(index>=capacity){
        return -1;
    }
    int j;
    j = size -1;
    while(j>=index){
        ar[j+1] = ar[j];
        j--;
    }
    ar[index] = element;
    return 1;
}
// Deletionn Operation
void delti(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}
// Bubble Sort
void bubble_srt(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 1; i < n; i++) // for number of passes
    {
        cout<<"working on pass number "<<i<<endl;

        isSorted =1;
        for (int j = 0; j < n-1; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return ;
        }
    }
}
// Merge Sort Operation
void mer_sort(int a[], int b[], int m, int n, int c[]){
    int i,j,k;
    i=j=k=0;
    while (i<m && j<n)
    {
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<m){
            c[k] = a[i];
            i++;
            k++;
        }
    while(j<n){
        c[k] = b[j];
        j++;
        k++;
    }
}
int main(){
    int keys;
    int ar1[10] ={78,58,25,96,47,12,36,29,72,10}; // For Linear operation
    int ar2[8] = {10,20,30,45,78,98,99,100}; // For Binary operation 
    int ar3[100] = {45,78,98,63,12,10,34,78,65}; // For Insertion
    int ar4[99] = {47,97,23,10,58,32,20,33}; // For Deletion
    int ar5[100] ={45,87,25,36,10,9, 101, 99,55,658,456,231}; // For Bubble Sort
    int Aa[]= {10, 45,56,78,88};      // Merge Sort
    int Ba[]= {-20,-11,36,47,58,100}; // Merge Sort
    int Cc[100];
    bool f;
    int indexx, m, n;
    cout<<"Here we perform opertaion with the help of switch case"<<endl;
    int opr, index, element, size;
    cout<<"Enter the operation number :"<<" ";
    cin>>opr ;
    switch (opr)
    {
    case 1:
        cout<<"This is Linear searching case: "<<endl;
        // cout<<"enter size"<<" ";
        // cin>>size;
        display(ar1, 10);
        cout<<"Enter the key you want to seacrh : "<<" ";
        cin>>keys;
        f = linaer_search(ar1, 10, keys);
        if (f)
        {
            cout<<"Key is present in array."<<endl;
        }
        else{
             cout<<"Key is not present in array."<<endl;
        }
        break;
    case 2:
        cout<<"This is Binary searching case: "<<endl;
        // cout<<"enter the size"<<" ";
        // cin>>size;
        display(ar2, 8);
        cout<<"Enter the key you want to search"<<" ";
        cin >>keys;
        indexx =  binaSear(ar2, 8, keys);

        if (indexx == -1)
        {
        cout<<"Key is not present"<<endl;
        }
        else
        {
        cout<<"Index is "<<indexx<<"and the key is : "<<keys<<endl;
        cout<<"Present in array";
        }
        break;
    case 3:
        cout<<"This is Insertion case: "<<endl;
        size = 9;
        display(ar3, size);
        cout<<"enter element u want to insert"<<" ";
        cin>>element;
        cout<<"enter the index where u want to insert elemnt: "<<" ";
        cin>>index;
        indInsertion(ar3, size, element, 100, index);
        size +=1;
        display(ar3, size);
        cout<<"after that here we perfrm bubble sort "<<endl;
        bubble_srt(ar3, size);
        display(ar3, size);
        break;
    case 4:
        cout<<"This is Deletion Case"<<endl;
        size=8;
        display(ar4, size);
        cout<<"Enter the index you want to delete"<<" ";
        cin>>index;
        delti(ar4, size, index);
        size -= 1;
        display(ar4, size);
        break;
    case 5:
        cout<<"This is bubble sort method case: "<<endl;
        size= 12;
        display(ar5, size); // before sorting
        bubble_srt(ar5, size); // sorting function
        display(ar5, size); // after sorting
        break;  
    case 6:
        cout<<"This is merge sort method case : "<<endl;
        m = 5;
        n = 6;
        display(Aa, m);
        display(Aa, n);
        mer_sort(Aa, Ba, m, n, Cc);
        display(Cc, (m+n));
        break;
    default:
        cout<<"You prees wrong key";
        break;
    }
return 0;
}