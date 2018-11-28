#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,k,i,sum;k=0;sum=0;
	int arr[100]={};
	cin>>n>>m;
	int no;
	while(n--)
	{
		cin>>no;
		if(no<0)
			{
				arr[k++]=no;
				sum+=no;
			}
	}	
	if(k<=m)
		cout<<abs(sum);
	else
	{		
		sum=0;
		sort(arr,arr+k);	
		for(i=0;i<m;i++)
			sum+=arr[i];
		cout<<abs(sum);
	}
	return 0;
}
