#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,c,min;c=0;
	cin>>n;
	vector<int> arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	min=arr[n-1]-arr[0];
	i = count(arr.begin(), arr.end(), arr[0]);
	j = count(arr.begin(), arr.end(), arr[n-1]);
	if(arr[0]==arr[n-1])
		c=n*(n-1)/2;
	else
		c=i*j;
	cout<<min<<" "<<c;
	return 0;
}
