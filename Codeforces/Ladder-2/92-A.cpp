#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	ll n,m;
	scanf("%lld%lld",&n,&m);
	ll temp,i;
	temp = (n*(n+1))/2;
	m%=temp;
	
	for(i=1;i<=n;i++)
	{
		if(i*i + i -2*m > 0)
			break;
	}
	temp=(i*(i-1))/2;
	cout<<m-temp;
	return 0;
}
