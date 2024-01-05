//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
class Solution{
	public:
	int res(int i,char prev,int N,vector<vector<int>>& dp){
	    if(i==N){
	       return 1;
	    }
	   
	  if(dp[i][prev-'A']!=-1) return dp[i][prev-'A'];
	    if(prev=='A'|| prev=='C'){
	       return dp[i][prev-'A']=( res(i+1,'B',N,dp)%mod + res(i+1,'A',N,dp)%mod)%mod;
	    }
	    else if(prev=='B'){
	        return dp[i][prev-'A']=res(i+1,'A',N,dp)%mod;
	    }
	   
	}
	int TotalWays(int N)
	{
	    // Code here
	  //  vector<vector<int>>dp(N,vector<int>(3,-1));
	  vector<vector<int>>dp(N,vector<int>(3,-1));
	  
	  long long int t= res(0,'C',N,dp)%mod;
	  // long long int t=(st.size())%mod;
	   return (t*t)%mod;
	    
	    
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends