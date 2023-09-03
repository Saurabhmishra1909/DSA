//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int i,int j,vector<vector<bool>> &visit,vector<vector<char>> &mat)
    {
        if(i<0 || j<0 ||i>=mat.size() ||j>= mat[0].size() || visit[i][j]==true || mat[i][j]=='X')
            return;
        
        visit[i][j]=true;
        
        dfs(i+1,j,visit,mat);
        dfs(i,j+1,visit,mat);
        dfs(i-1,j,visit,mat);
        dfs(i,j-1,visit,mat);
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<bool>> visit(n,vector<bool> (m,false));
        for(int i=0;i<n;i++)
        {
            if(visit[i][0]==false && mat[i][0]=='O')
                dfs(i,0,visit,mat);
            if(visit[i][m-1]==false && mat[i][m-1]=='O')
                dfs(i,m-1,visit,mat);
        }
        
        for(int j=0;j<m;j++)
        {
            if(visit[0][j]==false && mat[0][j]=='O')
                dfs(0,j,visit,mat);
            if(visit[n-1][j]==false && mat[n-1][j]=='O')
                dfs(n-1,j,visit,mat);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O' && visit[i][j]==false)
                    mat[i][j]='X';
            }
        }
        return mat;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends