#include<iostream>
using namespace std;
class employee{
    int id;
    static int count ;
    public:
    void setdata(void);
    void getdata(void);
    static void getcount(void){
        cout<<"the value of count is  " << count << endl; 
    }

};

void employee :: setdata(void){
    cout<<"enter the id of employee : " << " ";
    cin>>id;
    count++;
    
}
void employee :: getdata(void){
    cout<<"the id of this employee is" 
     << id <<"and this is employee number"<<" " <<count <<endl;
}
// count is the static data member of class employee
int employee :: count ; // static vatiable is  by defalut value  0

int main()
{
    employee sumit, himanshu, krish;
    sumit.setdata();
    sumit.getdata();
    employee :: getcount();
    
    himanshu.setdata();
    himanshu.getdata();
    employee :: getcount();
    
    krish.setdata();
    krish.getdata();
    employee :: getcount();

return 0;
}