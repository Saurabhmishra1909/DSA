//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
          int m = 1e9 + 7;
        // your code here
          if (n == 1 || n==2||n==0) return n;
    
    if (n == 3) return 4;

    long long ans = 0;
    long long a = 1, b = 2, c = 4;

    for (int i = 4; i <= n; i++)
    {
        ans = (a + b + c) % m;
        a = b;
        b = c;
        c = ans;
    }

    return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends