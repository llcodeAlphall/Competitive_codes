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
	ull t,c,n;	
	string str;
	scanf("%llu",&t);
	while(t--)
	{
		c=0;
		cin>>n;
		cin>>str;
		while(n--)
			if(str[n]=='0')
				c++;
		cout<<c<<endl;
	}
	return 0;
}
