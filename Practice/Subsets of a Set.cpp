#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

ull c,x;
void subarray(ull arr[],ull sum,ull i)
{
	if(i==x)
		{
			if(sum==x)
				c++;
		}
	else if(sum==x)
		c++;
	else if(sum>x)
		return;
	else
		{
			sum+=0;
			subarray(arr,sum,i+1);			
			sum+=arr[i];			
			if(sum>x)
				return;
			subarray(arr,sum,i+1);
		}	
}

int main()
{
	ull i,n;
	cin>>x>>n;
	ull arr[x];	
	ull brr[x]={0};
	for(i=0;i<x;i++)
		arr[i]=pow(i+1,n);
	c=0;
	subarray(arr,0,0);
	cout<<c;
	return 0;
}
