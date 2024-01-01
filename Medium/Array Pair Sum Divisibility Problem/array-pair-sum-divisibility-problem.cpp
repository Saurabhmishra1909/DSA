//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
          int l = nums.size();
        if(l%2 != 0) return false;
        vector<int> check(l, 0);
        for(int i=0; i<l; i++){
            if(check[i] != 1){
                check[i] = 1;
                int x = nums[i];
                for(int j=i+1; j<l; j++){
                    if((nums[j]+x) % k == 0){
                        check[j] = 1;
                        break;
                    }
                    if(j == l-1) return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends