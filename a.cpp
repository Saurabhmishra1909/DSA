#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node*left;
    Node*right;

    Node(int x)
    {
        val=x;
        left=right=NULL;
    }
};
void traverse(Node*root , vector<int>&v)
{
    if(root==NULL)
    {
        return ;
    }
    traverse(root->left,v);
    v.push_back(root->val);
    traverse(root->right,v);
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(3);
    root->right=new Node(5);
    vector<int>s;
    traverse(root,s);
    for(auto it :s)
    {
        cout<<it<<endl;
    }
    cout<<countLST(root)<<endl;
}
int countLST( Node *root){
    int count=0;
if(!root) return 0;
root=root->left;
    while(root->left){
        if(root){
        count++;
        }
        countLST(root->left);
    }
    return count;
}