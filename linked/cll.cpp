#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    // constructor 
    node(int val){
        data = val;
        next = NULL;
    }
    
};

// insert at head
void insertHead(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }
     temp->next = n;
     n->next = head;
     head = n;
}
// insert at tail
void insertTail(node* &head, int val){

    if(head == NULL){
        insertHead(head, val);
        return;
    }


    node* n = new node(val);
    node* temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    temp->next = n;
    n->next = head;
}
// delet at head
void deletAthead(node* &head){
        node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        node* todd = head;
        temp->next = head->next;
        head = head->next;

        delete todd;
}
// deletion
void deltion(node* &head, int pos){

        if(pos == 1){
            deletAthead(head);
            return;
        }
        node* temp = head;
        int count = 1;

        while(count != pos -1){
            temp = temp->next;
            count++;
        }

        node* todele = temp->next;
        temp->next = temp ->next ->next;

        delete todele;
}

void display(node* head){
    node* temp = head;
    do
    {
        cout<<temp->data <<"  ";
        temp = temp->next;
    } while (temp != head);

    cout<<endl;
    
}
int main()
{
    node* head = NULL;
    insertTail(head, 1);
    insertTail(head, 2);
    insertTail(head, 3);
    insertTail(head, 4);
    insertTail(head, 5);
    display(head);

    insertHead(head, 6);
    display(head);


    deltion(head, 6);
    display(head);
    deltion(head, 1);
    display(head);
return 0;
}