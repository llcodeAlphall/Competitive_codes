#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int main()
{
	ull k,n,i,c;c=0;
	cin>>n>>k;
	ull arr[n]={0};
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		c+=arr[i];
		if(c>k)
			break;			
	}
	cout<<i;
	return 0;
}
