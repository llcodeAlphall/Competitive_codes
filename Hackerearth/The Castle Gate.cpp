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
	ull t,n,i,c,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;
		for(i=1;i<=n;i++)
			for(j=i+1;j<=n;j++)
				if((i^j)<=n)
					c++;
		cout<<c<<endl;
	
	}
	return 0;
}
