//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int countSquare(int B)
    {
	    // code here 
	    int a=(B/2);
	    int sum=0;
	    for(int i=1;i<a;i++){
	        sum+=i;
	    }
	    return sum;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}
// } Driver Code Ends