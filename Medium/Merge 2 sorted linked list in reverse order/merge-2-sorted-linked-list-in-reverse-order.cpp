//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
     struct Node* reverse(struct Node* ans){        //Reversing the Linked List
        Node* prev = NULL;
        Node* curr = ans;
        Node* forw = curr->next;
        
        while(curr){
            curr->next = prev;
            prev = curr;
            curr = forw;
            if(forw){
                forw = forw->next;
            }
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2){
        if(node1 == NULL && node2 == NULL){
            return NULL;
        }
        struct Node* head1 = node1;
        struct Node* head2 = node2;
        
        struct Node* ans = newNode(-1);
        struct Node* t = ans;
        
        while(head1 != NULL && head2 != NULL){
            if(head1->data < head2->data){
                struct Node* temp = newNode(head1->data);
                t->next = temp;
                head1 = head1->next;
                t = t->next;
            }
            else{
                struct Node* temp = newNode(head2->data);
                t->next = temp;
                head2 = head2->next;
                t = t->next;
            }
        }
        
        while(head1){
            struct Node* temp = newNode(head1->data);
            t->next = temp;
            head1 = head1->next;
            t = t->next;
        }
        while(head2){
            struct Node* temp = newNode(head2->data);
            t->next = temp;
            head2 = head2->next;
            t = t->next;
        }
        
        return reverse(ans->next);
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends