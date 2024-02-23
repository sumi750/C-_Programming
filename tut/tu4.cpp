#include<iostream>
//  topic ----> call by value and call by refrence 
using namespace std;
int sum (int a , int b) // call by value 
{
    int c = a+b;
    return c;

}
void swap  (int &a , int &b)  
{
    int c = a;
    a = b;
    b = c;
    // return swap;
}
void swappointer(int *a, int *b) // call by refrence by pointer
{
    int temp = *a;
    *a = *b;
    *b = temp;

}         


int main()
{

    int a,b;
    cout<<"enter the value of a "<<" ";
    cin>>a;
    cout<<"enter the value of b"<<" ";
    cin>>b;
    int sum(int a, int b);
    cout<<"The sum of  a and b is "<<sum(a,b)<<endl;
    cout<<"the value of a is"<<a<<" "<<"the value of b is "<<b<<" "<<endl;   
    //   swap(a,b);

      swappointer(&a, &b);
    cout<<"the swap value of a is "<<a<<" "<<"the swap value of b is "<<" "<<b<<endl;
return 0;
}


// by refrence 

// #include<iostream>
// using namespace std;
// void swap(int*, int*);   prototype funtion
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     cout<<"before swap a "<<a<< " "<<" before swap b "<<b<<endl;
//     swap(&a,&b);
//     cout<<"after swap a is "<<a<<" "<<"after swap b is "<<b;

// return 0;
// }
// void swap (int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }