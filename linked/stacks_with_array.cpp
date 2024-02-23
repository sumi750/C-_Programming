#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // propertie
    public:
    int *arr;
    int top;
    int size;

    // behavoiur
    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow" <<endl;
        }

    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peak(){ // peak = top
            if(top >= 0){
            return arr[top];
            }
            else{
                cout<<"Stack is empty"<<endl;
            }
    }

    bool isEmpty(){
         if(top == -1){
            return true;
         }
         else{
            return false;
         }
    }

};

int main()
{

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(56);
    st.push(25);

    cout<<st.peak()<<endl;

    cout<<st.isEmpty()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peak()<<endl; // in empty stack this will gives garbage value 

    if(st.isEmpty()){
        cout<<"Stack is empty mere dost"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    /*
    // creation of stack using STL
    stack <int> s;

    // push opertaion
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    // pop operation
    s.pop();
    s.pop();


    
    cout<<"printing the top "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<" stack is not empty "<<endl;
    }

    */


return 0;
}