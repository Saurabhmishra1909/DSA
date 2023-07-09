#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>same;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                same.push_back(arr[i]);
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]&&arr[i+2]-arr[i+1]==2){
                same.push_back(arr[i+1]+1);
                break;
            }
            if(arr[i+1]-arr[i]==2){
                same.push_back(arr[i]+1);
                break;
            }
        }
        if(arr[0]!=1){
            same.push_back(1);
        }
        if(arr[n-1]!=n){
            same.push_back(n);
        }
        return same;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
