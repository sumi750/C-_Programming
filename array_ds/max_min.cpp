#include<iostream>
// #include<math.h>
using namespace std;
void printarr(int num[], int n){
    cout<<"printing array"<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<"printing done";
    
}
int getMax(int num[], int n){
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max = num[i];
        }
        
    }
    return max;
    
}
int getMin(int num[], int n){
    int min = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
        
    }
    return min;
    
}
int main()
{
    int num[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    printarr(num, size);
    cout<<"max value is "<<getMax(num, size);
    cout<<"min value is "<<getMin(num, size);
return 0;
}