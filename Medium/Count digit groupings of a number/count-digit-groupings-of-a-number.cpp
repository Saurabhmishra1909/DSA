//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
  int help(int ind , int sum , string &s , vector<vector<int>> &dp){
        if(ind==s.length())
        return 1;
        if(dp[ind][sum]!=-1)
        return dp[ind][sum];
        int x = 0 ,ans = 0;
        for(int i = ind ; i<s.length() ; i++){
            x += (s[i] - '0');
            if(x >= sum){
                ans += help(i+1 , x , s,dp);
            }
        }
        return dp[ind][sum] = ans;
    }
    int TotalCount(string str){
        int n = str.length() ; 
        vector<vector<int>> dp(n , vector<int>(901 , -1));
        return help(0 , 0 , str , dp);
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends