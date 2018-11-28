#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int n,m,d,i,j,min,sum;min=10000;
	cin>>n>>m>>d;
	vector<int> arr(n*m+1);
	for(i=1;i<=n*m;i++)
		cin>>arr[i-1];
	for(i=0;i<n*m;i++)
	{
		sum=0;
		for(j=0;j<n*m;j++)
		{
			sum+=abs(arr[j]-arr[i])/d;		
			if(abs(arr[j]-arr[i])%d!=0)	
				{
					cout<<-1;
					return 0;
				}
		}
		if(min>sum)
			min=sum;
	}
	cout<<min;
	return 0;
}
