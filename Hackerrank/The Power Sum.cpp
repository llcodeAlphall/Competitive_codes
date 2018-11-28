#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

ull pow(ull x,ull n)
{
	if(n==0)
		return 1;
	float temp;
	temp=pow(x,n/2);
	if(n%2==0)
		return temp*temp;
	else
		return x*temp*temp;
}
ull x,n;
ull c=0;
void sub(ull arr[],ull sum,ull i)
{
	if(i>x)
		return;
	else if(sum==x)
		{
			c++;
			return;
		}
	else if(arr[i]>x)
		return;
	else if(sum>x)
		return;
	else
	{
		sub(arr,sum,i+1);
		if(arr[i]<=x)
			sub(arr,sum+arr[i],i+1);
	}
}
int main()
{
	cin>>x>>n;
	ull i;
	ull arr[x+1];
	for(i=1;i<=x;i++)
	{
		arr[i]=pow(i,n);
	}
	sub(arr,0,1);
	cout<<c;
	return 0;
}
