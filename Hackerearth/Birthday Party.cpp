#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)
#define sull(i) scanf("%llu",&i)

int main()
{
	ull t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(m%n==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
