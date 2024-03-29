//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.length()!=str2.length()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<str1.length();i++){
            if(m1[str1[i]]!=m2[str2[i]]) return false;
            else{
                m1[str1[i]]=i+1;
                m2[str2[i]]=i+1;
            }
        }
       return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends