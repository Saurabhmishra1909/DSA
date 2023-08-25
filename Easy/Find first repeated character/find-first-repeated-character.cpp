//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int n=s.size();
    string st="";
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
        if(m[s[i]]==2){
            st+=s[i];
            return st;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(m.find(s[i])!=m.end()){
    //         st+=s[i];
    //         return st;
    //     }
    // }
    return "-1";
}