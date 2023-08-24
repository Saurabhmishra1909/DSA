//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.size();
	    if(S.size()%2==0){
	        int mid=n/2;
	        string a="";
	        for(int i=0;i<mid;i++){
	            a+=S[i];
	        }
	        string b="";
	        for(int i=n-1;i>=mid;i--){
	            b+=S[i];
	        }
	        if(a==b) return 1;
	    }
	    else{
	        int mid=n/2;
	        string a="";
	        for(int i=0;i<mid;i++){
	            a+=S[i];
	        }
	        string b="";
	        for(int i=n-1;i>mid;i--){
	            b+=S[i];
	        }
	        if(a==b) return 1;
	    }
	    return 0;
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

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends