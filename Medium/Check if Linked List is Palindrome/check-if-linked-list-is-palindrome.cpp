//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* swapi(Node* slow){
        Node* temp=NULL;
        while(slow){
            swap(slow->next,temp);
            swap(slow,temp);
        }
        return temp;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head) return 0;
        Node* temp=head;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(c%2==0){
            Node* temp2=head;
            Node* rev=swapi(slow);
            while(rev){
                if(temp2->data==rev->data){ 
                    temp2=temp2->next;
                    rev =rev->next;
                    continue;
                }
                else return false;
            }
        }
        else{
            Node* temp1=head;
            Node* rev=swapi(slow->next);
            while(rev){
                if(temp1->data==rev->data){ 
                    temp1=temp1->next;
                    rev=rev->next;
                    continue;
                }
                else return false;
            }
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends