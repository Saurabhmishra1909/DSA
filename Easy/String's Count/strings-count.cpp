//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
       long long a=1; // all a
    long long b=2*n; // n-1 a and 1 b or n-1 a and 1 c
    long long c= (n*(n-1))/2; //n-2 a + 2c
    long long d= (n*(n-1)); //n-2 a + 1b + 1c
    long long e=(n*(n-1)*(n-2))/2; // n-3 a + 1b +2c
    return a+b+c+d+e;
}