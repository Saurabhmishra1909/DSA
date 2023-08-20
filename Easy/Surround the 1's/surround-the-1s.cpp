//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        if(n<3 || m<3) return 0;
        else{
            
            int c=0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(matrix[i][j] == 1){
                        int x=0;
                        for(int k=-1; k<=1; k++){
                            for(int l=-1; l<=1; l++){
                                int nr = i+k;
                                int nc = j+l;
                                if(nr >=0 && nc >=0 && nr<n && nc<m && 
                                matrix[nr][nc]==0) x++;
                            }
                        }
                        if(x %2==0 && x>0) c++;
                    }
                    else continue;
                }
            }
        return c;
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends