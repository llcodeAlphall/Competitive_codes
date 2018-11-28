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
    ull t,n,m,a,b,x,y;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m>>x>>y;
    	a=abs((n-2)/x);
    	b=abs((m-2)/y);
    	if(a*x+2==n && b*y+2==m)
    		{
    			cout<<"Chefirnemo\n";
    			continue;
			}
		a=abs((n-1)/x);
    	b=abs((m-1)/y);
    	if(a*x+1==n && b*y+1==m)
    		{
    			cout<<"Chefirnemo\n";
    			continue;
			}
		cout<<"Pofik\n";
	}
    return 0;
}
