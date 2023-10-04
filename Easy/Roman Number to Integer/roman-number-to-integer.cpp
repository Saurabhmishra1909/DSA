//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
         int result=0;
       int i =0;
        map<char, int> mp {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(i; i<str.length(); i++){
            auto it2 = mp.find(str[i+1]);
            auto it  = mp.find(str[i]);
            if(it->second<it2->second && i<str.length()-1){
                result-=it->second;
            }
            else{
            result+=it->second;
                
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends