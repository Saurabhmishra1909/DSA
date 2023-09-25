//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
  int maxi=0;
  set<char>s;
  int l=0;
  int r=0;
  while(r<S.length())
  {
      if(s.find(S[r])==s.end())
      {
          s.insert(S[r]);
          r++;
           maxi=max(maxi,(int)s.size());
      }
      else
      {
          maxi=max(maxi,(int)s.size());
          s.clear();
          l++;
          r=l;
          
      }
  }
  return maxi;
}