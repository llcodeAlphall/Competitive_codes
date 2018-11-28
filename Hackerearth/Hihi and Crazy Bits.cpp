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
	ull t,n,i;	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&n);
		i=0;
		while(n&(1<<i))
			i++;
		printf("%llu\n",n+(1<<i));
	}

	return 0;
}
