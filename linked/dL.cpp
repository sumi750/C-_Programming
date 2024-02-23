#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    // constructor
    node (int val ){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// tranversing
void display(node* head){
    node* temp = head;
    cout<<"NULL"<<" ->";
    while(temp != NULL){
        cout << temp ->data <<" ->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


// length checker
int getLength(node* head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// add at begining
void insertAthead(node* &head, int val){
    node* temp = new node(val);
    temp ->next = head;
    head-> prev = temp;
    head = temp;
}

// insert at ending

void insertAtTail(node* &tail, int val){
    node* temp = new node(val);
    tail ->next = temp;
    temp->prev = tail;
    tail = temp;
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

// Insert at any position

void insertAtpos(node* &tail, node* &head, int position, int val){
        // insert at start
        if(position == 1){
            insertAthead(head, val);
            return;
        }
        // As trasersing for postion number
        node* temp = head;
        int cnt = 1;
        while(cnt < position -1){
            temp = temp->next;
            cnt++;
        }

        // inserting at last position
        if(temp->next == NULL){
            insertAtTail(tail, val);
            return;
        }
        //in between node
        node* insertNode = new node(val);
        insertNode ->next = temp->next;
        temp->next->prev = insertNode;
        temp->next = insertNode;
        insertNode ->prev = temp;

}
// delete at head
void deletHead(node* &head){
    node* toDelte = head;
    head = head->next;
    head->prev = NULL;
    delete toDelte;
}


// deleting process
void deletion(node* &head, int position){

    if(position == 1){
        deletHead(head);
        return;
    }

    node* temp = head;
    int count = 1;
    while(temp != NULL && count != position){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;
}

// Main function
int main()
{
    node* node1 = new node(10);
    // node* node2 = new node(20);
    node* head = node1;
    node* tail = node1;

    // display(head);
    // cout<<"the length of DL is "<<getLength(head) << endl;
    cout<<"Inserting at head "<<endl;
    insertAthead(head, 9);
    insertAthead(head, 8);
    insertAthead(head, 7);
    display(head);
    cout<<"Inserting at tail "<<endl;
    insertAtTail(tail, 25);
    display(head);

    cout<<" Searching operation " << search(head, 25) << endl;
    cout<<"Insert at anyopstion "<<endl;
    insertAtpos(tail, head, 2, 36);
    display(head);

    cout<<"Deleating process "<<endl;

    deletion(head, 1);
    display(head);

return 0;
}