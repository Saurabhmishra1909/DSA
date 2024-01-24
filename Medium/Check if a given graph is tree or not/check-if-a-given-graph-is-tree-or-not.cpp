//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
        // code here
        void dfs(int start,vector<int>&ls,vector<int> adj[],int arr[]){
        
        arr[start] = 1;
        ls.push_back(start);
        for( auto neigh: adj[start]){
            if(!arr[neigh]){
                dfs(neigh,ls,adj,arr);
            }
        }
    }
  
    int isTree(int n, int m, vector<vector<int>> &adj) {
        
        if(n != m+1) return 0;
        vector<int> ad[n];
        for(auto itr:adj){
            ad[itr[0]].push_back(itr[1]);
            ad[itr[1]].push_back(itr[0]);
        }
        
        vector<int> ls;
        int arr[n] = {0};
        dfs(0,ls,ad,arr);
        for(int i = 0;i<n;i++){
            if(arr[i] == 0) return 0;
        }
        return 1;
       
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends