//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
   
int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            
            int l =0, r = n;
            
            while(l <= r){
                int m1 = (l+r)/2;
                int m2 = n-m1;
                
                int l1 = INT_MIN, l2 = INT_MIN;
                int r1 = INT_MAX, r2 = INT_MAX;
                
                if(m1 >= 1)l1 = ar1[m1-1];
                if(m2 >= 1)l2 = ar2[m2-1];
                if(m1 < n)r1 = ar1[m1];
                if(m2 < n)r2 = ar2[m2];
                
 
                if(l1 <= r2 && l2 <= r1){
                    return (max(l1, l2) + min(r1, r2));
                }
                
                else if(l1 > r2)r = m1 -1;
                else l = m1 +1 ;
            }
            
            return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends