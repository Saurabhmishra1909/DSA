#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
  
struct Node
{
    int data;
    struct Node* next;
};
  
void forwardPrint(struct Node* head)
{
    if (head == NULL)
       return;
 
    cout<<head->data<<" ";
    forwardPrint(head->next);
}

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

Node* shiftSmallLarge(Node* head) {
  // Write your code here
 if(head==NULL||head->next==NULL){
   return head;
 }
  Node* min=NULL;
  Node* max=NULL;
  Node* prev=NULL;
  Node* curr=head;
  Node*minprev=NULL;
  Node*maxprev=NULL;
  while(curr!=NULL){
    if(min==NULL||min->data>curr->data){
      minprev=prev;
      min=curr;
    }
    if(max==NULL||max->data<curr->data){
    maxprev=prev;
    max=curr;
  }
    prev=curr;
    curr=curr->next;
  }
  if(min==head && max==prev){
    return head;
  }
  if(max!=prev){
    if(max==head){
    if(max==minprev){
      minprev=maxprev;
    }
    head=head->next;
    max->next=NULL;
    prev->next=max;
  }
  else{
    if(max==minprev){
      minprev=maxprev;
    }
    maxprev->next=max->next;
    max->next=NULL;
    prev->next=max;
  }
}
  if(min!=head){
    minprev->next=min->next;
    min->next=head;
    head=min;
  }
   return head;
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
    head = shiftSmallLarge(head);
    forwardPrint(head);
    cout<<endl;
  }
  return 0;
}
