#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
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
int main()
{
    int arr[10] = {45,78,65,23,25,95,41,14,0,98};
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"enter the element to search for"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is not present in array"<<endl;
    }

return 0;
}
