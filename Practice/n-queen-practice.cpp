#include<bits/stdc++.h>
using namespace std;

#define n 4
int board[n][n]={0};
//first solution
/*
void display(int arr[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
}

bool isSafe(int arr[n][n],int row,int col)
{
	int i,j;
	//check row
	for(i=0;i<=col;i++)
		if(arr[row][i]==1)
			return false;
	//check upper diagonal
	for(i=row,j=col; i>=0,j>=0;i--,j--)
		if(arr[i][j]==1)
			return false;
	for(i=row,j=col;i<n,j>=0;i++,j--)
		if(arr[i][j]==1)
			return false;
	return true;
}

bool solveNQ(int arr[n][n],int col)
{
	if(col==n)
		{
			display(arr);
			return true;
		}
	int i;
	for(i=0;i<n;i++)
	{
		if(isSafe(arr,i,col))
			{
				arr[i][col]=1;
				if(solveNQ(arr,col+1))
					return true;
				arr[i][col]=0;
			}
	}
	return false;
}


int main()
{
	int i,j;
	if(solveNQ(board,0))
		cout<<"arrangement possible";
	else
		cout<<"Arragement not possible";
	return 0;
}*/


//Second Solution
/*
void display(int arr[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
}
bool isSafe(int arr[n][n],int row,int col)
{
	int i,j;
	//check row
	for(i=col;i<n;i++)
		if(arr[row][i]==1)
			return false;
	//check upper diagonal
	for(i=row,j=col; i<n,j<n;i++,j++)
		if(arr[i][j]==1)
			return false;
	for(i=row,j=col;i>=0,j<n;i--,j++)
		if(arr[i][j]==1)
			return false;
	return true;
}

bool solveNQ(int arr[n][n],int col)
{
	if(col<0)
		{
			display(arr);
			return true;
		}
	int i;
	for(i=0;i<n;i++)
	{
		if(isSafe(arr,i,col))
			{
				arr[i][col]=1;
				if(solveNQ(arr,col-1))
					return true;
				arr[i][col]=0;
			}
	}
	return false;
}


int main()
{
	int i,j;
	if(solveNQ(board,n-1))
		cout<<"arrangement possible";
	else
		cout<<"Arragement not possible";
	return 0;
}
*/
