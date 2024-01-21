//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                // code her
            int num=1<<n,ans=n,cnt=0,c=0,m=edges.size();
            // GENERATE THE SUBSETS .....
            for(int i=1;i<(num);i++){
                cnt=0;c=0;
                for(int j=0;j<m;j++){
                    int l=1<<(edges[j].first-1);
                    int r=1<<(edges[j].second-1);
                    if(!( (l & i) || (r & i) )){
                        c=1;
                        break;
                    }
                }
                cnt=__builtin_popcount(i);
                if( c == 0 ) ans=min(cnt,ans); 
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            edges.push_back({a,b});
        }
        Solution s;
        cout<<s.vertexCover(n,edges)<<endl;
    }
    return 0;
}
// } Driver Code Ends