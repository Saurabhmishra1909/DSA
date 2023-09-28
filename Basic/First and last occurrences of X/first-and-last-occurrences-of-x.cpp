//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here'
        vector<int>v;
        int i=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
            v.push_back(i);
            break;}
        }
        for(int j=n-1;j>=i;j--){
            if(arr[j]==x){
            v.push_back(j);
            break;}
        }
        if(v.empty()) return {-1};
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends