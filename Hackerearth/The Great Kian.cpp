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
	ull n,i;
	cin>>n;
	int arr[n+5];
	ull sum1,sum2,sum3;
	sum1=sum2=sum3=0;
	f(i,1,n)	
	{
		cin>>arr[i];
		sum3+=arr[i];
	}
	for(i=1;i<=n;i+=3)
		sum1+=arr[i];
	for(i=2;i<=n;i+=3)
		sum2+=arr[i];
	sum3-=sum1+sum2;
	cout<<sum1<<" "<<sum2<<" "<<sum3;
	
	return 0;
}
