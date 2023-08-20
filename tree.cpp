#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(Node* root) {
        Node* node=root;
        int c=0;
        while(true){
            if(node!=NULL){
                if(node->val%2==0)c++;
                node=node->left;  
            }
            else{
                node=node->right;
                if(node->val%2==0)c++;
                node=node->left;
            }
        }
        return c;
    }