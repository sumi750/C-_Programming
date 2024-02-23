#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int);
    void get_roll_no(void);

};
void student :: set_roll_no(int r){
    roll_no = r;
}
void student :: get_roll_no(){
     cout<<"the roll number is "<<roll_no<<endl;
}

class exam : public student{
    protected:
    float maths, chem;
    public:
    void set_marks(float, float);
    void get_marks(void);

};

void exam :: set_marks(float m1, float m2){
    maths = m1;
    chem = m2;

}

void exam :: get_marks(void){
    cout<<"the maths marks "<<maths<<endl;
    cout<<"the chem marks "<<chem<<endl;
}

class result : public exam {
    protected: float  percentage;
    public:
    void display_result(){
        get_roll_no();
        get_marks();

        cout<<"your result is "<<(maths + chem)/2<<"%"<<endl;
    }
};
int main()
{
    result sumit;
    sumit.set_roll_no(46);
    sumit.set_marks(91.2, 78.3);
    sumit.display_result();
return 0;
}