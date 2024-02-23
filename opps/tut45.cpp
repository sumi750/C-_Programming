#include<iostream>
using namespace std;
/*
student---->test
student----> sports
test--->result
sports--->result
*/
class student{
    protected: int roll_no;
    public:
    void set_number(int a){
        roll_no= a;
    }
    void print_number(void){
        cout<<"your roll number is "<<roll_no<<endl;
    } };

class test : virtual public student
    {
      protected:
      float maths, phy;
      public:
      void set_marks(float m1, float m2){
        maths = m1;
        phy = m2;
      }
      void print_marks(){
        cout<<"your result is here : "<<endl;
        cout<<"maths --->"<<maths << endl;
        cout<<"phy ----> "<<phy << endl;
      }  
    };


class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_scoe(){
        cout<<"your pt score is "<<score<<endl;
    }
};


class result : public test, public sports{
    private:
    float total;
    public:
    void display(){
        total = maths + phy + score;
        print_number();
        print_marks();
        print_scoe();
        cout<<"your total scpre is "<<total<<endl;

    }

};
int main()
{
    result sumi;
    sumi.set_marks(97.00, 90.00);
    sumi.set_number(46);
    sumi.set_score(8.0);

    sumi.display();
return 0;
}