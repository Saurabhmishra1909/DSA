//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
          priority_queue<pair<int,int>, 
            vector<pair<int,int>>, 
                greater<pair<int,int>>>pq;
        // {price, maxCnt}
        
        for(int i=0; i<n; i++){
            pq.push({price[i], i+1});
        }
        
        int cnt=0;
        while(!pq.empty()){
            auto it = pq.top(); 
            pq.pop();
            
            int prices = it.first;
            int quantity = it.second;
            
            while(prices <= k and quantity > 0){
                cnt++;
                quantity--;
                k-=prices;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends