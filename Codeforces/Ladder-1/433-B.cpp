#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	vector<int> arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i];
		
	vector<unsigned long long int> sum1(n+1);
	vector<unsigned long long int> sum2(n+1);
	sum1[0]=0;
	sum2[0]=0;
	
	for(i=1;i<=n;i++)
		sum1[i]=arr[i-1]+sum1[i-1];
		
	sort(arr.begin(),arr.end());
	
	for(i=1;i<=n;i++)
		sum2[i]=arr[i-1]+sum2[i-1];
		
	int m,l,r,no;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>no>>l>>r;
		if(no==1)
		{
			cout<<sum1[r]-sum1[l-1]<<endl;
		}
		else
		{
			cout<<sum2[r]-sum2[l-1]<<endl;
		}
		
	}
	return 0;
}
