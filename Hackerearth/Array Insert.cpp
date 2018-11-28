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
	ull n,q,i,j,sum;
	cin>>n>>q;	
	int arr[n];
	f(i,0,n-1)	cin>>arr[i];
	ull a,b,c;
	f(i,1,q)			
	{
		cin>>a>>b>>c;		
		if(a==1)
			arr[b]=c;			
		else
		{
			sum=0;
			for(j=b;j<=c;j++)
				sum+=arr[j];
			cout<<sum<<endl;
		}
	}	
	return 0;
}
