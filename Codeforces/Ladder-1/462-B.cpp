#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,k,i,sum;sum=0;
	char ch;
	cin>>n>>k;
	vector<unsigned long long int> arr(125);
	for(i=1;i<=n;i++)
		{
			cin>>ch;
			arr[ch]++;
		}
	sort(arr.begin(),arr.end(),greater<int>());
	i=0;
	while(k>0)
	{
		
		if(k>arr[i])
			{
				k-=arr[i];
				sum+=arr[i]*arr[i];
				i++;
			}
		else
			{
				sum+=k*k;
				k=0;
				i++;
			}
	}
	cout<<sum;
	return 0;
}
