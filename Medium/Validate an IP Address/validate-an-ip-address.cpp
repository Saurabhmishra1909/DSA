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
            if(s.length() > 15 or s.length() < 7) return 0;
    
    int dot = 0, res;
    string str;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '.')
        {
            if(str.length() > 1 and str[0] == '0') return 0;
            str.clear();
            dot++;
            if(dot > 3) return 0;
        }
        else if(s[i]>=48 and s[i]<=57)
        {
            str.push_back(s[i]);
            if(str.length() == 4) return 0;
            res = stoi(str);
            if(res > 255) return 0;
        }
        else
        {
            return 0;
        }
    }
    if(str.length() > 1 and str[0] == '0') return 0;
    return 1;
            
            
            
            
            
            
            // vector<string>v;
            // string ans="";
            // int num=1;
            // for(auto i:s){
            //     if(i=='.') {
            //         if(ans.size()==0) return false;
            //         v.push_back(ans);
            //         ans="";
            //         num++;
            //     }
            //     else {
            //         ans+=i;
            //     }
            // }
            // if(num!=4) return false;
            // for(auto i:v){
            //     // cout<<i<<" ";
            //     int a=stoi(i);
            //     if(i.size()>1&&a==0) return false;
                
            //     if(a>=0&&a<=255) continue;
            //     else return 0;
            // }
            // return 1;
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