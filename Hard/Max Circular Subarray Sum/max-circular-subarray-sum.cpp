//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int mass=INT_MIN;
        int miss=INT_MAX;
        int aS=0;
        int tmas=0;
        int tmis=0;
        for(int i=0;i<n;i++){
            aS+=arr[i];
            //max subarraysum
            tmas=max(tmas+arr[i],arr[i]);
            mass=max(mass,tmas);
            //min subarray sum
            tmis=min(tmis+arr[i],arr[i]);
            miss=min(miss,tmis);
        }
        if(aS==miss) return mass;
        return max(mass,(aS-miss));
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends