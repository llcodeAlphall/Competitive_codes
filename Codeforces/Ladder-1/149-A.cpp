#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin>>k;
	int arr[12];
	int sum,n;sum=0;n=0;
	
	if(k==0)
		{
			cout<<0;
			return 0;
		}
	int i;
	for(i=0;i<12;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
	
	if(sum<k)
		{
			cout<<-1;
			return 0;
		}
	sort(arr,arr+12,greater<int>());
	sum=0;	
	for(i=0;i<12;i++)
		{
			if(sum>=k)
				break;
			sum+=arr[i];
			n++;
		}
	cout<<n;
	return 0;
}
