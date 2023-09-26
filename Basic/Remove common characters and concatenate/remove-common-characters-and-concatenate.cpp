//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s1.length();i++)
        {
            mp1[s1[i]]++;
        }
        for(int i=0;i<s2.length();i++)
        {
            mp2[s2[i]]++;
        }
        string temp ="";
        for(char ch:s1)
        {
            if(!mp2[ch])
            {
                temp+=ch;
            }
        }
        for(char ch:s2)
        {
            if(!mp1[ch])
            {
                temp+=ch;
            }
        }
       return temp==""?"-1":temp;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends