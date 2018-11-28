#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int f(ll x)
{	
	while(x>0)
	{
		if((x%10!=4) && (x%10!=7))
			{				
				return 0;				
			}
		x/=10;			
	}
	return 1;
}
int main()
{
	ll i,n;
	cin>>n;
	for(i=1;i<=n;i++)
		{
			if(f(i)==1 && n%i ==0)
				{
					cout<<"YES";
					return 0;
				}
		}
	cout<<"NO";
	return 0;
}
