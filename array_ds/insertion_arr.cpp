#include<iostream>
using namespace std;
// transversal array
void display(int ar[], int n){
    for(int i = 0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
// insertion array
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
int main()
{
    int ar[100];
    int size = 5;
    for (int i = 0; i < 5; i++)
    {
        cin>>ar[i];
    }
    
    display(ar, size);
    int  element, index;
    cout<<"enter element u want to insert"<<" ";
    cin>>element;
    cout<<"enter the index where u want to insert elemnt: "<<" ";
    cin>>index;
    indInsertion(ar, size, element, 100, index);
    size +=1;
    display(ar, size);

return 0;
}
