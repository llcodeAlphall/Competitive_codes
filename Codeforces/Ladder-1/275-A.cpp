#include<bits/stdc++.h>
using namespace std;
int findsum(int arr[][3],int i,int j)
{
	int sum;sum=0;
	sum+=arr[i][j];
	if(i-1>=0)
		sum+=arr[i-1][j];
	if(i+1<3)
		sum+=arr[i+1][j];
	if(j-1>=0)
		sum+=arr[i][j-1];
	if(j+1<3)
		sum+=arr[i][j+1];
	return sum;
}
int main()
{
	int i,j,no;
	int arr[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>arr[i][j];
	
	for(i=0;i<3;i++)
	{		
		for(j=0;j<3;j++)
		{			
			if(findsum(arr,i,j)%2==0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
