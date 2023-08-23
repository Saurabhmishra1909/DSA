//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int>m;
            for(int i=0;i<A.size();i++){
                m[A[i]]++;
            }
            unordered_set<char>s;
            for(int i=0;i<B.size();i++){
                if(m.find(B[i])!=m.end()){
                    continue;
                }
                else s.insert(B[i]);
            }
            unordered_map<char,int>m1;
            for(int i=0;i<B.size();i++){
                m1[B[i]]++;
            }
            for(int i=0;i<A.size();i++){
                if(m1.find(A[i])!=m1.end()){
                    continue;
                }
                else s.insert(A[i]);
            }
            string st="";
            for(auto it:s){
                st+=it;
            }
            sort(st.begin(),st.end());
            if(st.size()==0) return "-1";
            return st;
        }
};

    

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends