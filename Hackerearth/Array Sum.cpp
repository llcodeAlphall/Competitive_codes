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
	ull n,i,no,sum;sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>no;
			sum+=no;
		}
	cout<<sum;
	
	
	return 0;
}
