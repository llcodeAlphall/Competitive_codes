#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

#define max 10
int n;
int arr[10][10]={0};

void display(int arr[max][max])
{
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
}
bool isSafe(int arr[max][max],int col,int row)
{
	int i,j;
	//check row	
	for(i=0;i<row;i++)
		if(arr[i][col]==1)
			return false;
	//check upper diagonal
	for(i=row,j=col;i>=0 && j>=0;i--,j--)
		if(arr[i][j]==1)
			return false;
	for(i=row,j=col;i>=0 && j<n;i--,j++)
		if(arr[i][j]==1)
			return false;
	return true;
}

bool solveNQ(int arr[max][max],int row)
{
	if(row>=n)
		{
			display(arr);
			return true;
		}
	int i;
	for(i=0;i<n;i++)
	{
		if(isSafe(arr,i,row))
			{
				arr[row][i]=1;
				if(solveNQ(arr,row+1))
					return true;
				arr[row][i]=0;
			}
	}
	return false;
}


int main()
{
	cin>>n;
	if(solveNQ(arr,0));
	else
		cout<<"Not possible";
	return 0;
}

