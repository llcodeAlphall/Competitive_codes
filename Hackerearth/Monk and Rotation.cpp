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
	ull n,t,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ull arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		k=k%n;
		for(i=n-k;i<n;i++)
			cout<<arr[i]<<" ";
		for(i=0;i<n-k;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
