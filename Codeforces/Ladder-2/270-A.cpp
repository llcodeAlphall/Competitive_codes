#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	ll n,x,t;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(360%(180-x)==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}
