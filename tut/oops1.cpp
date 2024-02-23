#include<iostream>
using namespace std;
class student                     // student is the class name 
{
    char name [20];             /* variable used in class*/
    int roll_no;
    float marks;
    public:                       // access specifier
    void getData();              // member function

    void display()              // member function

    { 
        // member funciton defenation inside the class
            cout<<"The name of the student is "<<" "<<name<<endl;
            cout<<"The roll no of the student is "<<" "<<roll_no<<endl;
            cout<<"the marks of the student are "<<" "<<marks<<endl;
        }
};
        void student :: getData()
        {
            cout<<"name";
            cin>>name;
            cout<<"roll no";
            cin>>roll_no;
            cout<<"marks";
            cin>>marks;
        }
        // member function defenation outside the class
        // void student :: display()
        // {
        //     cout<<"The name of the student is "<<" "<<name<<endl;
        //     cout<<"The roll no of the student is "<<" "<<roll_no<<endl;
        //     cout<<"the marks of the student are "<<" "<<marks<<endl;
        // }

int main()
{
    student s1;
    s1.getData();
    s1.display();
return 0;
}




/*structure of OOP
1. #INCLUDE FILES
2. CLASS DECLARATION
3. MEMBER FUNCTION DEFINATION
4. MAIN DUNCITON PROGRAM AND CALLING*/