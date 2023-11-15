//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string betterString(string str1, string str2) {
        return solve(str2)>solve(str1)?str2:str1;
    }
    
    int solve(string s) {
        int n = s.length();
        vector<int> dp(n + 1, 0);
        dp[0] = 1; 
    
        vector<int> lastIndex(256, -1); 
    
        for (int i = 1; i <= n; ++i) {
            dp[i] = 2 * dp[i - 1]; 
    
            if (lastIndex[s[i - 1]] != -1) {
                dp[i] -= dp[lastIndex[s[i - 1]]]; 
            }
            lastIndex[s[i - 1]] = i - 1;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends