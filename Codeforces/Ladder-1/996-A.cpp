#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,c;c=0;
	cin>>n;
	if(n/100)
	{
		c+=n/100;n%=100;
	}
	if(n/20 )
	{
		c+=n/20;n%=20;
	}
	if(n/10)
	{
		c+=n/10;n%=10;
	}
	if(n/5)
	{
		c+=n/5;n%=5;
	}
	c+=n;
	cout<<c;
	return 0;
}
