#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	ll n,k,i;
	cin>>n>>k;
	for(i=1;i<=n-k-1;i++)
		cout<<i<<" ";
	for(i=n;i>=n-k;i--)
		cout<<i<<" ";
	return 0;
}
