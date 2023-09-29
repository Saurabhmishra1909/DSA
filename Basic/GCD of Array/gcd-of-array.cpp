//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    int gcd(int N, int a[])
    {
    	// Your code goes here
    	int r{ *a };
    while ( --N ) r = __gcd( r, a[ N ]);
    return r;
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends