//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
    vector<int>ans;
    int n=array1.size();
    int m=array2.size();
    int i=0;
    int j=0;
    vector<double>v;
    while(i<n&&j<m){
       if(array1[i]<array2[j]){
           v.push_back(array1[i]);
           i++;
       }
       else{
           v.push_back(array2[j]);
           j++;
       }
    }
    while(i<n){
        v.push_back(array1[i]);
        i++;
    }
    while(j<m){
        v.push_back(array2[j]);
        j++;
    }
    if(v.size()%2==0){
       double mid=v.size()/2;
       double a=double((v[mid-1]+v[mid])/2);
       return a;
    }
    else {
        return v[(v.size()/2)];
    }
    return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends