#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 122;
        cout << "Enter the id of the employee  " << endl;
        cin >> id;
    }
    void getID(void)
    {
        cout << "the id of the employee is " << id << endl;
    }
};

int main()
{
    employee fb[4]; // object as array 
    for (int i = 0; i<4 ; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}