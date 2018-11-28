#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long

#define db double

int main()
{
/*	ui n;
	ull l,r,c,i,m,pos;
	cin>>n;
	while(n--)
	{
		cin>>l>>r;	
		m=0;
		for(i=l;i<=r;i++)
		{
			c=__builtin_popcount(i);
			if(m<c)
				{
					m=c;
					pos = i;
				}			
		}
		cout<<pos<<endl;
	}
	*/
	ull n,l,r;
	cin>>n;
	while(n--)
	{
		cin>>l>>r;
		while((l|l+1)<=r)
		{
			l=l|(l+1);
			
		}
		cout<<l<<endl;
	}
	return 0;
}
