#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"left of-> "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"right of-> "<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}

void inorder(node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);//L
    cout<<root->data<<" ";//N
    inorder(root->right);//R
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";//N
    preorder(root->left);//L
    preorder(root->right);//R
}

void postorder(node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);//L
    postorder(root->right);//R
    cout<<root->data<<"  ";//N
}

int main()
{
    node* root=NULL;
    root=buildTree(root);

    cout<<"Inorder: ";
    inorder(root);

    cout<<endl<<"Preorder: ";
    preorder(root);

    cout<<endl<<"Postorder: ";
    postorder(root);

    return 0;
}