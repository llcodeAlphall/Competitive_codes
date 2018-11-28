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
	ull n,k,i,j,m;
	cin>>n>>k;
	ull arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	m=arr[k-1]-arr[0];
	for(i=0;i<n-k+1;i++)
			m=min( m,(arr[i+k-1]-arr[i]) );
	cout<<m;
	return 0;
}
