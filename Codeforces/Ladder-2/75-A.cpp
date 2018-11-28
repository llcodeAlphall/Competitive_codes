#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double

ull f1(ull x)
{
	ull ans;ans=0;
	while(x>0)
	{
		if(x%10!=0)
			{
				ans=ans*10+x%10;
			}
		x/=10;
	}
	return ans;	
}
ull f2(ull x)
{
	ull ans;ans=0;
	while(x>0)
	{
		ans=ans*10+x%10;
		x/=10;
	}
	return ans;	
}
int main()
{
	ull a,b,c;
	cin>>a>>b;
	c=a+b;

	a=f2(f1(a));
	b=f2(f1(b));
	c=f2(f1(c));

	if(a+b==c)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
