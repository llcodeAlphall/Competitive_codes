#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i,j,prod;
	cin>>n>>k;
	int pos,min;
	vector<int> arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i];
	prod=arr[n-1];	
	
	for(i=n-1;i>=n-k;i--)
		{
			min=arr[i];
			for(j=i-1;j>=i-k;j--)
				{
					if(min>arr[j])
						{
							min=arr[j];
							pos=j;
						}
				}
			i=pos;
			prod*=min;
		}
	cout<<prod;
	return 0;
}
