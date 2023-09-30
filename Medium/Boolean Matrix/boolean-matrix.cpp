//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &m)
    {
        // code here 
         int r = m.size();
        int c = m[0].size();
        int row[r];
        int col[c];
        
        //check row and column.
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }        
            }
        }
        //fill row's 
        for(int i=0;i<r;i++){
            if(row[i] == 1){
                for(int j=0;j<c;j++){
                    m[i][j] = 1;
                }
            }
        }
        
        //fill column's
        for(int j=0;j<c;j++){
            if(col[j] == 1){
                for(int i=0;i<r;i++){
                    m[i][j] = 1;
                }
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends