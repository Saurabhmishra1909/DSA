//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	  if(n%k!=0) return 0;
    unordered_map<string,int> mp;
    int i=0;
    while(i<=n-k){
      string temp= s.substr(i,k);
       mp[temp]++;
       if(mp.size()>2) return false;
       i=i+k;
    }

    int count=0;
    for(auto i : mp){
        // cout<<" key : "<<i.first<<" value : "<<i.second<<endl;
        if(i.second>1) count++;
    }
    return count<=1?1:0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends