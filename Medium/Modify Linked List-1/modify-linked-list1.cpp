//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    Node* rev(Node* head){
        Node* temp=NULL;
        while(head){
            swap(head->next,temp);
            swap(head,temp);
        }
        return temp;
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        if(!head) return NULL;
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        Node* temp=rev(slow->next);
        Node* temp2=head;
        while(temp){
            temp2->data=temp->data-temp2->data;
            temp2=temp2->next;
            temp=temp->next;
        }
        Node* dot=head;
        while(dot!=slow){
            temp2->data=dot->data;
            dot=dot->next;
            temp2=temp2->next;
        }
        return temp2;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends