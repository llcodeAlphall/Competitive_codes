#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int k,n,i,j,c;c=-1;
	cin>>n>>k;
	vector<long int> arr(n+1);
	for(i=1;i<=n;i++)
		cin>>arr[i];
	for(i=n;i>=1;i--)
		if(arr[i]!=arr[k])
			{
				c=i;break;
			}
	if(c<=k)
		cout<<c;
	else 	
		cout<<-1;
	return 0;
}
