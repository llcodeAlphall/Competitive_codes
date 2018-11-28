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
	ull n,q,l,r,i;
	ull sum[100005];sum[0]=0;
	ull arr[100005];	
	ull ans;
	
	cin>>n>>q;
	
	f(i,1,n)	scanf("%llu",&arr[i]);
	f(i,1,n)
		sum[i] = sum[i-1] + arr[i];
	f(i,1,q)
	{
		scanf("%llu",&l);
		scanf("%llu",&r);
		ans=sum[r]-sum[l-1];
		ans/=r-l+1;
		printf("%llu\n",ans);
	}
	return 0;
}
