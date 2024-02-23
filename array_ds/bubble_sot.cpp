#include<iostream>
using namespace std;
// diplay array
void print_arr(int* A, int n ) // here we use pointer
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
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
int main()
{
    int A[] ={45,87,25,36,10,9, 101, 99,55,658,456,231};
    int n = 12;
    print_arr(A, n); // printing the array before sorting
    bubble_srt(A, n); // sorting
    print_arr(A, n); // printing after sorting
return 0;
}