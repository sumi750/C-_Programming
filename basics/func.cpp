#include<iostream>
using namespace std;
int powr(int a , int b); // prototyping
int poww(){
    int x, y;
    cin>>x>>y;
    int z = 1;
    for (int i = 1; i <= y; i++)
    {
        z = z*x;
    }
    return z;
    
}

int facto(int n){
    int ff= 1;
    for (int i = 1; i <= n; i++)
    {
        ff = ff*i;
    }
    return ff;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    int answer = powr(a,b);
    cout<<answer <<endl;
    
    int me = poww();
    cout<<"answer is "<<me<<endl;


    // factorial 
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int fact = facto(n);
    cout<<"the value of factoiral is "<<fact<<endl;
    return 0;

}
int powr(int a, int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        /* code */
        ans = ans*a;
    }
    return ans;
    
}