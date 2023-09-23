//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
       
        int i=0;
        int j=n-1;
        long long sumi=0,sumj=0;
        if(n==1) return n;
        while(i<j){
            if(sumi==sumj){
                sumi+=a[i];
                sumj+=a[j];
                i++;
                j--;
            } 
            else if(sumi<sumj){
                sumi+=a[i];
                i++;
            }
            else{
                sumj+=a[j];
                j--;
            }
            // cout<<sumi<<" "<<sumj<<endl;
        }
        if(sumi==sumj) return i+1;
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends