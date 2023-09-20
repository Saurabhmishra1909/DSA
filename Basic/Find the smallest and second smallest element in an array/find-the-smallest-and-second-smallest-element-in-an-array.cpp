//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size()==1) return {-1};
    vector<int>v;
    for(auto i:s){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    return {v[0],v[1]};
    
}