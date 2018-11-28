#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

#define n 4

void display(int board[n][n]);
bool solveNQ(int board[n][n], int col);
bool isSafePos(int board[n][n], int row, int col);

void display(int board[n][n]) 
{
	int r, c;
	for(r=0;r<n;r++) 
	{
		for(c=0;c<n;c++) 
			cout<<board[r][c];
		cout<<endl;
	}
}

bool solveNQ(int board[n][n], int col)
{	
	if(col >= n) 
		return true;
	int i;
	for(i=0;i<n;i++) 
	{
		if(isSafePos(board, i, col) == true) 
		{
			board[i][col] = 1;			
			if(solveNQ(board, col+1) == true) 
				return true;
			board[i][col] = 0;
		}
	}
	return false;
}

bool isSafePos(int board[n][n], int row, int col) 
{
	int r, c;	
	/*  if there is a queen in the given row then it is not a safe position */
	for(c = 0; c < col; c++)
		if(board[row][c] == 1)
			return false;
	/*  check upper diagonal */
	for(r = row, c = col; r >= 0 && c >= 0; r--, c--)
		if(board[r][c] == 1) 
			return false;
	/*  check lower diagonal  */
	for (r = row, c = col; c >= 0 && r < n; r++, c--) 
		if (board[r][c] == 1) 
			return false;
	return true;
}

int main(void) 
{	
	int board[n][n]={0};
	if(solveNQ(board, 0) == false) 
		cout<<"No solution!\n";
	else 
		display(board);
	return 0;
}
