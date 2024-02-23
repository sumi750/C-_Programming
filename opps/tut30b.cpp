#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x, y;
    friend void distance(point , point);

    public:
    point(int a, int b){
        x = a;
        y = b;

    }
     void displaypoint(void){
        cout<<"the point is ( "<<x<<" , "<<y<<" ) "<<endl;
     }

};
    void distance ( point p1, point p2){
        int x_diff = (p2.x - p1.x);
        int y_diff = (p2.y - p1.y);
        int diff = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
        cout<<"the disffrence is :  "<<diff<<endl;

    }

    // create a function which takes 2 point objects and compute the distncae b/w those point
int main()
{
    point p (1,2);
    p.displaypoint();

    point q(4,6);
    q.displaypoint();

    distance(p,q);
return 0;
}