#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void insertEnd(struct Node** head, int data)
{
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  struct Node *last = *head;
  node->data  = data;     //  Insert data in new node
  node->next = NULL;   // link new node to NULL as it is last node
  if (*head == NULL)  // if list is empty add in beginning.
  {
    *head = node;
    return;
  }
  while (last->next != NULL)  // Find the last node
    last = last->next;
  last->next = node;  // Add the node after the last node of list
  return;
}

void forwardPrint(struct Node* head) {
    if(head==NULL){
      return;
    }
    else{
      cout<<head->data<<"-";
      forwardPrint(head->next);
    }
}

void backwardPrint(struct Node* head) {
      if(head==NULL){
        return;
      }
      else{
        backwardPrint(head->next);
        cout<<head->data<<"-";
      }
}
int main()
{
  int t,n,m;
  cin>>t;
  while(t--)
  {
    struct Node* head = NULL;
    cin>>n;
    while(n--)
    {
      cin>>m;
      insertEnd(&head, m);
    }
    forwardPrint(head);
    cout<<endl;
    backwardPrint(head);
    cout<<endl;
  }
  return 0;
}