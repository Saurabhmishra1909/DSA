//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
        // code here
          vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        set<vector<int>> ans;
        permute(ans,n,0,arr);
        vector<vector<int>> nums(ans.begin(),ans.end());
        return nums;
    }
    void permute(set<vector<int>> &ans,int n,int index,vector<int> &str){
        if(index == n){
            ans.insert(str);
            return;
        }
        for(int i =index;i < n;i++){
            swap(str[index],str[i]);
            permute(ans,n,index +1,str);
            swap(str[index],str[i]);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends