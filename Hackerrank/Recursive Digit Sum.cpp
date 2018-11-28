#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

ull calc(ull no)
{
	if(no==0)
		return 0;
	return (no%10 + calc(no/10));
}

ull func(ull n)
{
	if(n/10==0)	
		return n;
	return func(calc(n));
}
ull sum(string str)
{
	ull i,ans;ans=0;
	for(i=0;i<str.size();i++)
		ans+=str[i]-48;
	return ans;
}
int main()
{
	ull k;string str;
	cin>>str>>k;
	ull ans=sum(str);
	ans*=k;
	cout<<func(ans);	
	return 0;
}
