#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float Salary;
    employee(){}
    employee(int inpid){
        id = inpid;
        Salary = 34.00;
        }
};
// creating a programmer class derived from emoployee base class
class programmer : public employee
{
    public:
    int languagecode;
    programmer(int inpid)
      {
        id = inpid;
        languagecode = 9;
      }  
      void get_data(){
        cout<<id<<endl;
      }
};
int main()
{
    employee sumit(1), harry (2);
    cout<<sumit.Salary<<endl;
    cout<<harry.Salary<<endl;

    programmer skill(10);
    cout<<skill.languagecode<<endl;
    cout<<skill.id<<endl;
    skill.get_data();

return 0;
}