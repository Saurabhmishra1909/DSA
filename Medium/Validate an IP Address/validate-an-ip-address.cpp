//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            s.push_back('.');
            vector<string>v;
            string ans="";
            int num=0;
            for(auto i:s){
                if(i=='.') {
                    if(ans.size()==0) return false;
                    v.push_back(ans);
                    ans="";
                    num++;
                }
                else ans.push_back(i);
            }
            
            if(num!=4) return false;
            for(auto i:v){
                for (char c: i) {
                    if (isalpha(c)) return false;
                }
                int a=stoi(i);
                if(i.size()>1&&a<=9) return false;
                
                if(a>=0&&a<=255) continue;
                else return 0;
            }
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends