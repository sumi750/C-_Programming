#include<iostream>
using namespace std;
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
int main()
{
    int even[6] = {-1,16,25,55,78,90};
    int odd[5] = {2,5,8,9,10};
    int key;
    cout<<"enter the key u want to search"<<endl;
    cin>>key;

    int indexE = binaSear(even, 6, key);

if (indexE == -1){
    cout<<"key is not present"<<endl;
}
else{
    cout<<"index is "<<indexE<<"and the key is "<<key<<endl;
    cout<<"present in array";
}
    cout<<"again enter the key"<<endl;
    cin>>key;
    int indexO = binaSear(odd, 5, key);
    if (indexO == -1){
    cout<<"key is not present"<<endl;
}
else{
    cout<<"index is "<<indexO<<"and the key is "<<key<<endl;
    cout<<"present in array";
}

return 0;
}