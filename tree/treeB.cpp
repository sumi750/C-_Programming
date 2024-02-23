// Binary Tree : Collection of nodes 
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};

// recursive method

node* buildTree(node* root){

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;

    root = new node(data); // construction call

    if(data == -1){
        return NULL;
    }

    // recusrion function menthod
    cout<<"Enter the data for inserting in left of " <<data <<endl;
    root->left = buildTree(root->left);
    cout<<"enter the data for inserting in right of "<<data <<endl;
    root->right = buildTree(root->right);

    return root;
}

// level order traversing
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

// inorder  Traversal
void inorder(node* root){

    // Base Case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
}

// PreOrder Traversal : recursive way
void preOrder(node* root){
    // base case
    if(root== NULL){
        return;
    }

    cout<< root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}


// Post Order Traversal
void postOrder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data <<" ";
}

int main()
{
    node* root = NULL;

    // creating a tree
    root = buildTree(root); 

    // 1 3 8 -1 -1  9 -1 -1 7 10 -1 -1 11 -1 -1
    // level order
    cout<<"printing the level order trversal output "<<endl;
    levelOrderTraversal(root);

    // InOrder Traversal --> LNR
    cout<<"inorder Traversal "<<endl;
    inorder(root);
    cout<<endl;
    // PreOrder Traversal --> NLR
    cout<<"PreOrder Traversal "<<endl;
    preOrder(root);

    cout<<endl;
    // PostOrder Traversal
    cout<<"Post Order Traverdal "<<endl;
    postOrder(root);
return 0;
}