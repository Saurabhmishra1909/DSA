//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        int start = 0;
        int end = n-1;
        
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid] == target)
                return arr[mid];
            else if(target > arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
           
        }
        if(end < 0)
            return arr[start];
        else if(start > n)
            return arr[end];
        else
        {
            if(abs(target - arr[start]) <= abs(target - arr[end]))
                return arr[start];
            else
                return arr[end];
        }
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends