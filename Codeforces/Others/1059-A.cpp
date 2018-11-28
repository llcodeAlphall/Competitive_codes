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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ull n,L,a,i,ans,l,t;ans=0;
	cin>>n>>L>>a;
	if(n==0)
	{
		cout<<L/a;		
		return 0;
	}
	else if(n==1)
	{
		cin>>t>>l;
		cout<<(t/a) + (L-t-l)/a;
		return 0;
	}
	else
	{
		ull lp,tp;
		cin>>tp>>lp;
		for(i=1;i<n;i++)
			{
				cin>>t>>l;
				ans+=t-tp-lp;
				tp=t;
				lp=l;
			}
		ans+=(L-t-l)/a;
		cout<<ans;
		return 0;
	}
	
	return 0;
}
