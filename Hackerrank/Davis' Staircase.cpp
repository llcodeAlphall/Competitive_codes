#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

ull sum(ui n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 4;
	else if(n==4)
		return 7;
	else if(n==5)
		return 13;
	else if(n==6)
		return 24;
	else if(n==7)
		return 44;
	return (sum(n-1) + sum(n-2) + sum(n-3))%10000000007;
}

int main()
{
	ui s,n;
	cin>>s;
	while(s--)
	{
		cin>>n;
		cout<<sum(n)<<endl;
	}
	return 0;
}
