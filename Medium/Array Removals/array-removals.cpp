//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(),arr.end());
        int min=0;
        int i;
        int count=0;
        int ans=0;
        int n=arr.size();
        for(i=0;i<n;i++)
        {
            
            if(arr[i]<=arr[min]+k)
            {
                count++;
            }
            else
            {
               ans=max(ans,count);
               min=min+1;
               i-- ;
                count--; 
            }
        }
        ans=max(ans,count);
        return n-ans ;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends