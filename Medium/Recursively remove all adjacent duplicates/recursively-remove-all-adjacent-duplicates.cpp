//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
          if(s.size()==0)
        return s;
        if(s.size()==1)
        return s;
        string temp="";
        int flag=0;
        for(int i=1;i<s.size();)
        {
            while(s[i-1]==s[i])
            {
                flag=1;
                i++;
            }
            if(i-2>=0 && s[i-1]!=s[i] && s[i-1]==s[i-2])
            i++;
            else if(s[i-1]!=s[i])
            {
            temp+=s[i-1];
            i++;
            }
        }
        if(s[s.size()-1]!=s[s.size()-2])
        temp+=s[s.size()-1];
        if(flag==0)
        return temp;
    return rremove(temp);
    }
};





    // string re(string s,string ans,int i){
    //     int a=s[i-1];
    //     if(i==s.size()) return ans;
    //     if(a==s[i]||s[i]==s[i+1]) re(s,ans,i+1);
    //     else ans+=s[i];
    //     return re(s,ans,i+1);
    // }
    // string rremove(string s){
    //     // code her
    //     string ans="";
    //     int i=0;
    //     return re(s,ans,i);
    // }
// };

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends