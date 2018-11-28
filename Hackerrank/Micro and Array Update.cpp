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
	ull t,n,k,temp;
	cin>>t;
	ull i,no;
	while(t--)
	{
		cin>>n>>k;		
		cin>>temp;		
		for(i=1;i<n;i++)
			{
				cin>>no;
				temp=min(temp,no);
			}
		if(temp<k)
			cout<<k-temp<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
