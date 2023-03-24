// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int row_start=0;
//     int row_end=n-1;
//     int column_start=0;
//     int column_end=m-1;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
    
//         while(row_start<=row_end && column_start<=column_end){
//             for(int col=column_start;col<=column_end;col++){
//                 cout<<a[row_start][col]<<" ";
//             }
//             // cout<<endl;
//             row_start++;
//             for(int row=row_start;row<=row_end;row++){
//                 cout<<a[row][column_end]<<" ";
//             }
//             // cout<<endl;
//             column_end--;
//             for(int col=column_end;col>=column_start;col--){
//                 cout<<a[row_end][col]<<" ";
//             }
//             // cout<<endl;
//             row_end--;
//             for(int row=row_end;row>=row_start;row--){
//                 cout<<a[row][column_start]<<" ";
//             }
//             // cout<<en
//             column_start++;
//         }
//     return 0;
// }
// C++ Program to print a matrix spirally

#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	/* k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator
	*/

	while (k < m && l < n) {
		/* Print the first row from
			the remaining rows */
		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;

		/* Print the last column
		from the remaining columns */
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;

		/* Print the last row from
				the remaining rows */
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		/* Print the first column from
				the remaining columns */
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

/* Driver Code */
int main()
{
	int a[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8  }};

	// Function Call
	spiralPrint(R, C, a);
	return 0;
}

// This is code is contributed by rathbhupendra
