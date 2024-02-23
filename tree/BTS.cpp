#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d ){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

// 
node* insertIntoBST(node* root, int d){
    // base case 
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(d > root ->data){
        // right mein insert 
        root-> right = insertIntoBST(root->right, d);
    }
    else{
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

// level order traversal 
void levelOrderTraversal(node* root){

    if (root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // purana level complete ho chuka hai 
            cout<<endl;
            if(!q.empty()){
                // q has still child
                q.push(NULL);
            }
        }

        else{
            cout<< temp ->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
    


}
int main()
{

    node* root  = NULL;
    cout<<"Enter data to create BST "<<endl;
    takeInput(root);

    cout<<"priting the BST "<<endl;
    levelOrderTraversal(root);
return 0;
}