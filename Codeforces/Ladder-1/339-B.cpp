#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int m,n,i,c,cur;c=0;cur=1;
	cin>>n>>m;
	vector<unsigned long long int> arr(m);
	for(i=0;i<m;i++)
		cin>>arr[i];
	
	for(i=0;i<m;i++)
	{
		if(arr[i]>cur)
			{
				c+=arr[i]-cur;
				cur=arr[i];
			}
		else if(arr[i]<cur)
			{
				c=c+(n-cur)+arr[i];
				cur=arr[i];
			}
	}
	cout<<c;
	return 0;
}
