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
	ull n,no,i;
	ull p;p=1;
	scanf("%llu",&n);
	for(i=1;i<=n;i++)
		{
			scanf("%llu",&no);
			p=(p*no)%1000000007;
		}
	printf("%llu",p);
	return 0;
}
