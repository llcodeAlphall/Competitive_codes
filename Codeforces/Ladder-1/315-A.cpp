#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double

int main()
{
	ui n;
	cin>>n;
	vector<int> arr(n*2);
	ui i,a,b,j,temp;
	
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		arr[2*i]=a;
		arr[2*i+1]=b;
	}
	
	for(i=0;i<n;i++)
	{
		if( arr[2*i]!=arr[2*i+1] )
			{
				temp=arr[2*i+1];
				for(j=0;j<n*2;j++)
					if(arr[j]==temp)
						arr[j]=0;
			}
	}
	ui count;count=0;
	for(i=0;i<n*2;i++)
		{
			if(arr[i]!=0)
				count++;
		}
	cout<<count;
	
	return 0;
}
