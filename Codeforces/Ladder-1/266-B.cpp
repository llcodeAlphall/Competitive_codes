#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,i;
	cin>>n>>t;
	char temp;
	vector<char> arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i];
	while(t>0)
	{
		t--;
		for(i=n-1;i>=0;i-=1)
		{
			if(arr[i]=='G'&&arr[i-1]=='B')
				{
					temp=arr[i];
					arr[i]=arr[i-1];
					arr[i-1]=temp;
					i--;
				}
		}
	}
	for(i=0;i<n;i++)
		cout<<arr[i];
	return 0;
}
