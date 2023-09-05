//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int closestNumber(int N , int M)
    {
        int close1, close2;
        int rem = N / M;
        close1 = M * rem;
        if((N<0 && M<0) || (N>0 && M>0))
        {
            close2 = M * (rem + 1);
        }
        else
        {
            close2 = M * (rem - 1);
        }
            if (( abs( abs(N) - abs(close2) )) <= ( abs( abs(N) - abs(close1) ) ))
            {
                return close2;
            }
            else
            {
                return close1;
            }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends