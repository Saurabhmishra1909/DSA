//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        
        if(n == 0)
            return { 0 };
            
        unordered_set<int> set;
        vector<int> v = { 0 };
            
        for(int i = 1, c = 0; i <= n; i++)
        {
            c = v[i - 1] - i;

            if(c <= 0 || set.find(c) != set.end())
                c = v[i - 1] + i;
                
            v.push_back(c);
            set.insert(c);
        }
        
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends