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
	ull n,c;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	while(cin>>n)	
	{
		c=0;
		while(n>0)
		{
			c++;
			n=n&(n-1);
		}
		printf("%llu\n",c);
	}
	return 0;
}
