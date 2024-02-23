#include<iostream>
using namespace std;
void print(int **p2){
    p2 = p2 + 1; // no change

    *p2 = *p2  + 1;


}
int main()
{
    // double pointer
    int i = 5;
    int *p= &i;
    int **p2 = &p;

    cout << "sab sahi chal raha ha " << endl <<endl;
    cout << "add of i " << &i << endl;
    cout << "printing P " << p <<endl;
    cout << " add pf P " << &p <<endl;
    cout << "printing P2 " << p2 <<endl;
    cout << **p2 <<endl;

    cout << endl <<endl;
    cout << "before " << i <<endl;
    cout << "before " << p <<endl;
    cout << "before " << p2 <<endl;
    print (p2);
    cout << "after " << i <<endl;
    cout << "after " << p<<endl;
    cout << "after " << p2 <<endl;

return 0;
}