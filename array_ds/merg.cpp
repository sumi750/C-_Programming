#include<iostream>
using namespace std;
void display(int *ab, int l){
    for (int i = 0; i < l; i++)
    {
        cout<<ab[i]<<" ";
    }
    cout<<endl;
}
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
int main()
{
    int Aa[]= {10, 45,56,78,88};
    int Ba[]= {-20,-11,36,47,58, 100 , 200};
    int Cc[100];
    int m=5;
    int n=7;
    display(Aa, m);
    display(Ba, n);
    mer_sort(Aa, Ba, m, n, Cc);
    display(Cc, 12);

return 0;
} 