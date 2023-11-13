//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int LCS(string X,string Y, int i,int j,vector<vector<int>> &dp)
    {
        if(i==X.length())
        {
            return 0;
        }
        
        if(j==Y.length())
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int ans=0;
        
        if(X[i]==Y[j])
        {
            ans=1+LCS(X,Y,i+1,j+1,dp);
        }
        else
        {
            ans=max(LCS(X,Y,i+1,j,dp),LCS(X,Y,i,j+1,dp));
        }
        
        return dp[i][j]=ans;
        
    }
    
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        int result=LCS(X,Y,0,0,dp);
        
        return m+n-result;
        
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends