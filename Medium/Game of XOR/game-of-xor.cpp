//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        int cur=0;
        if(N&1){
            for(int i=0;i<N;i++){
                if((i%2) == 0){
                    cur = cur^A[i];
                }
            }
        }
        return cur;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends