#include<iostream>
using namespace std;
// creating a node 
class node{
    public:
    int data;
    node* next; // bcoz conting the address of next node

    node(int val) // constructor 
    {
        data = val;
        next = NULL;
    }
};

// inserting at tail
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL ){
        temp = temp->next;
    }
    temp ->next = n;
}
// insert at head
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

// display
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


// searching
bool search(node* head, int key){
    node* temp = head;
    while(temp!= NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }

    return false;
    }

// deleting first element
void deletAthead(node* &head) // no need to take val 
{
    node* todelete = head;
    head = head->next;

    delete todelete;
}

// deletion
void deletion(node* &head, int val){

    // if node is NULL
    if(head == NULL){
        return;
    }
    
    if(head->next == NULL){
        deletAthead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val) // from here we get n-1th node
    {
        temp = temp->next;
    }
    node* todelet = temp->next; // node which have to delete
    temp->next = temp->next->next; // n-1th point to n+1th node

    delete todelet;
}



// reversing a node

node* reverse(node* &head){
    node* preptr = NULL;
    node* curptr = head;
    node* nextptr;

    while(curptr !=NULL){
        nextptr = curptr->next;
        curptr->next = preptr;

        preptr = curptr;
        curptr = nextptr;
    }

    return preptr;
}
int main()
{   

    // creating a node  
    node* head = NULL;
    // node* head = new node(10);
    insertAtTail(head, 10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head, 45);
    display(head);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    display(head);  

    cout<<search(head, 100)<<endl;

    deletion(head, 30);
    deletAthead(head);
    display(head);
    node* newHead = reverse(head);
    display(newHead);
return 0;
}