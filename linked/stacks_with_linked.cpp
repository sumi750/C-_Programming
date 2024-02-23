#include<iostream>
#include<math.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data ){
        this->data = data;
        this->next = NULL;
    }

};

class Stack{
    Node* head;
    int capacit;
    int currSize;
    
    public:
    Stack(int c){
        this->capacit = c;
        this->currSize = 0;
        head = NULL;
    }

    // Empty or not
    bool isEmpty(){
        return this->head = NULL;
    }

    // full or not
    bool isFull(){
        return this->currSize == this->capacit;
    }

    // push or adding function

    void push(int data){

        if(this->currSize = this->capacit){
            cout<<"OverFlow"<<endl;
            return;
        }

        Node* new_node = new Node(data);
        new_node->next = head;
        this->head = new_node;
        this->currSize++;
    }

    // pop
    void pop(){
        if(this->head == NULL){
            cout<<"underflow"<<endl;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        delete this->head;
        this->head = new_head;
    }
    // top value
    int getTOP(){
        if(this->head == NULL){
            cout<<"underflow"<<endl;
        }
        return this->head->data;
    }
    // sizee
    int size(){
        return this->currSize;
    }
};
int main()
{
    Stack st(5); // size of stack is 5
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    // st.push(8);

    cout<<st.getTOP()<<endl;

return 0;
}