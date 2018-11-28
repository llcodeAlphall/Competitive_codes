#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,i,temp;
	cin>>n>>m;
	vector<int> arr(m);
	for(i=0;i<m;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	long long int min;min=INT_MAX;
	temp=(m-n)/2;
	for(i=0;i<m-n+1;i++)
		{
			temp=abs(arr[i]-arr[i+n-1]);
			if(min>temp)
				min=temp;
		}
	cout<<min;
	return 0;
}
