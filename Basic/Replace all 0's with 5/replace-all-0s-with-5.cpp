//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    vector<int>arr;
    int i=0;
    while(n){
        arr.push_back(n%10);
        n=n/10;
    }
    int a=0;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==0) arr[i]=5;
        a=10*a+arr[i];
    }
    return a;
}