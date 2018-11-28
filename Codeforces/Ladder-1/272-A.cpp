#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no,sum;sum=0;
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>no;
		sum+=no;
	}
	int count=0;
	
	for(i=1;i<=5;i++)
	{
		if( (sum+i-1)%(n+1)!=0 ) 
			count++;
	}
	cout<<count;
	return 0;
}
