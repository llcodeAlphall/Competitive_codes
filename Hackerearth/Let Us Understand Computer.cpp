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
	ull t,x,i,c;
	cin>>t;
	while(t--)
	{
		cin>>x;
		c=0;
		for(i=1;i<=x;i++)				
				if(ceil(log2(1+x/i)) <= (ceil(log2(1+i))))
					c++;
		cout<<c<<endl;
	}
	return 0;
}
