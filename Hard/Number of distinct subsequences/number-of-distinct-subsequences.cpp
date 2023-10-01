//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	     int mod = 1e9 + 7;
    int n = s.length();
    vector<int> dp(n + 1);
    dp[0] = 1;
    vector<int> lastSeen(256, -1);  // Initialize to -1, one value for each character

    for (int i = 1; i <= n; i++) {
        char ch = s[i - 1];
        dp[i] = (2 * dp[i - 1]) % mod;

        if (lastSeen[ch] != -1) {
            int ans = lastSeen[ch];
            dp[i] = (dp[i] - dp[ans - 1] + mod) % mod;
        }

        lastSeen[ch] = i;  // Update the last seen index of this character
    }

    return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends