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
	double r,x;
	ull i,d;
	ull ans=0;
	cin>>d;	
	for(i=1;i<=d;i++)
	{
		cin>>r>>x;
		if(700*x >= r*r*22)
			ans++;
	}
	cout<<ans;
	
	
	return 0;
}
