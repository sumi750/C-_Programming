#include<iostream>
//array of object.....
using namespace std;
class employee{
    char name[30];
    // int age;
    int roll_number;
    int marks1;
    int marks2;
    int marks3;
    int result;
    public:
    void getdATA( void ){
        cout<<"enter the name of student: ";
        cin>>name;
        // cout<<"entr the age of student";
        // cin>>age;
        cout<<"enter the roll number of srudent";
        cin>>roll_number;
        }
    void getmarks(void){
        cout<<"enter the values of marks1";
        cin>>marks1;
        cout<<"enter the values of marks2";
        cin>>marks2;
        cout<<"enter the values of marks3";
        cin>>marks3;
        
    }
    void putDATA();
    // void result(){
    //     result = (marks1+ marks2 + marks3)/2;
    //     cout<<"the result is "<<result<<endl; 
    // }
    

};
    void employee :: putDATA()
    {
        cout<<"name: "<<" is "<<name<<endl;
        cout<<"Age : "<<" is "<<roll_number<<endl;
        cout<<"marks1"<< " is "<<marks1<<endl;
        cout<<"marks2"<< " is "<<marks2<<endl;
        cout<<"marks3"<< " is "<<marks3<<endl;

        result= (marks1+marks2+marks3)/2;
        cout<<"result is "<<result<<endl;
        

    }
const int size = 1;
int main()
{
    employee Manager[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"\n details of student "<<i + 1 << endl;
        Manager[i].getdATA();
        Manager[i].getmarks();
        cout<<endl;

    }

    for (int i = 0; i < size; i++)
    {
        cout<<"\n manager "<< i+ 1 <<endl;
        Manager[i].putDATA();
        
    }
 return 0;
}