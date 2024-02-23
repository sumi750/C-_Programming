#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string color;
};
class student{
    string name;
    int roll_no;
};
int main()
{
    fruit apple; // object
    apple.name = "Apple";
    apple.color = "red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    fruit *mango = new fruit();
    mango->name = "mango";
    mango->color = "Green";
    cout<<mango->name<<" - "<<mango->color<<endl;
return 0;
}