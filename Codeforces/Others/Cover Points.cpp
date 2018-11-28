#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

bool flag=false;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ull n,x,y,c;c=0;
	
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		c=max(c,x+y);
	}
	cout<<c;
	return 0;
}
