bool isSafe(int row ,int col, vector<vector<int>>&board,int val){
    for(int i=0;i<board.size();i++){
        //row check
        if(board[row][i] == val)
        return false;
        //col check
        if(board[i][col] == val)
        return false;
        //3x3 matrix check
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val)
        return false;
    }
    return true; 
}

bool solve (vector<vector<int>>& board){
    int n= board[0].size();
    for(int row= 0; row<n; row++){
        for(int col =0; col< n;col++){
            if(isSafe (row,col, board, val)){
                board[row][col] = val;
                //recursive call
                bool aageSolutionPossible =solve(board);
                if(aageSolutionPossible)
                return true;
                else{
                    //backtrack
                    board[row][col] =0;
                }
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<int>>&sudoku){
        solve(sudoku);
    }
}int main()
{
	// 0 means unassigned cells
	int board[row][col] ={ 
        { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
		{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
		{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
		{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
		{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
		{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
		{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } 
        };

	if (solveSudoku(board, 0, 0))
		print(board);
	else
		cout << "no solution exists " << endl;

	return 0;
}
