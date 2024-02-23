#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100] ;
    int size=0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    // insert
    void insert(int val){

        size= size+1;
        int index = size;
        arr[index] = val;

        while(index >1){
            int parent = index/2;
            // comapring of parent
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }

    }

    // prit 
    void print(){
        for (int i = 1; i <= size; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

    // deletion code
    void todelet(){
        if(size == 0){
            cout<<"nothing to delete "<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        // take root node to correct postion
        int i = 1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i +1;

            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }

            else{
                return;
            }
        }
    }
};

// hepify
void heapfy(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest !=i){
        swap(arr[largest], arr[i]);

        heapfy(arr, n, largest);
    }
}

// heap sort
void heapsort(int arr[], int n){
    int size=n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;

        heapfy(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(60);
    h.insert(100);
    h.insert(90);
    h.insert(45);

    h.print();

    // h.todelet();
    // h.print(); 

    int arr[6] = {-1, 54,25,87,36,89 };
    int n= 5;
    for (int i = n/2; i >0; i--)
    {
        /* code */
        heapfy(arr, n, i);
    }

    cout<<"printing the array "<<endl;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    // heapsort
    heapsort(arr, n);
    // TC O(nlogn)
    cout<<"printing the array "<<endl;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
return 0;
}