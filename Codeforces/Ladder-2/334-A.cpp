#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100+1][100+1];
	int i,j,n,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%2==0)
				arr[i][j]=(j)*n-i+1;
			else
				arr[i][j]=(j-1)*n+i;
		}
	}	
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}
	return 0;
}
