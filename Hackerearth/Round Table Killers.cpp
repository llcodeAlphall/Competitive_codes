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
	ull n,k,x,i,b;
	cin>>n>>k>>x;
	int arr[1000+5]={};
	
	for(i=1;i<=n;i++)
		arr[i]=i;
	
	ull c=n;
	while(c>1)
	{
		c -= x%k;
		b=0;
		for(i=x+1;b<=x%k;i++)
			{
				if(arr[i]!=-1)
				{
					arr[i]=-1;
					b++;
					cout<<2;
				}
				if(i==n)
					i=1;				
			}	
		x=x+x%k+1;
		cout<<1;
		if(x>n)	
			x=x%n;
	}
	for(i=1;i<=n;i++)
		if(arr[i]!=-1)
			cout<<arr[i];
			
	return 0;
}
