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
	string str;
	cin>>str;
	str+='z';
	ull n,c,i,ans;
	n=str.size();
	c=0;ans=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
			c++;
		else
			{					
				ans=max(c,ans);
				c=0;
			}
	}
	cout<<ans;
	return 0;
}
