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
    ull x,n,a,b,t,s;
    cin>>t;
    while(t--)
    {
    	cin>>n>>x>>s;
    	while(s--)
    	{
    		cin>>a>>b;
    		if(x==a)
    			x=b;
    		else if(x==b)
    			x=a;
		}		
		cout<<x<<endl;		
	}
    return 0;
}
