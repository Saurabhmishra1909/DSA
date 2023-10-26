//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
      int minOperation(int n)
    {
        int i=n;
        int count=0;
        while(i>0)
        {
            if(i%2==0 && i/2>0)
                i=i/2;
            else
            i=i-1;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends