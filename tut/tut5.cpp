#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1){
        return 1;
    }
else{
    return n*factorial(n-1);
}
}

int main()
{
    // factorial of number with the help of factorial
    int a;

    cout<<"enter a number : "; 
    cin>>a;
    cout<<"the factorial of"<<" "<<a<<" is "<<factorial(a)<<endl;

return 0;
}