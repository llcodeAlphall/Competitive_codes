#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,no,i;i=1;
	cin>>n;
	long long int len=n;
	map<long long int,long long int> arr;
	while(n--)
	{
		cin>>no;
		arr[no]=i++;
	}
	cin>>n;
	long long int f,r;f=r=0;
	while(n--)
	{
		cin>>no;
		f+=arr[no];
		r+=len-arr[no]+1;
	}
	cout<<f<<" "<<r;
	return 0;
}
