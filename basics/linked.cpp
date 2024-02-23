#include<iostream>
using namespace std;
void insertbeg(int);
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
int main()
{
    int choice, item;
    do{
        cout<<"enter the item which u want to insert? "<<endl;
        cin>>item;
        insertbeg(item);
        cout<<"press 0 to insert more ? "<<endl;
        cin>>choice;
    }while (choice == 0);
return 0;
}
void insertbeg(int item){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        cout<<"OverFlow"<<endl;
    }
    else{
        if(head == NULL)
        {
            ptr -> next = NULL;
            ptr -> prev = NULL;
            ptr -> data = item;
            head = ptr;
        }
        else{
            ptr -> data = item;
            ptr -> prev = NULL;
            ptr -> next = head;
            head -> prev = ptr;
            head = ptr;
        }
    }
    
}