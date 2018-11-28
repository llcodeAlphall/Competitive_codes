#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long

#define db double

int main()
{
	ull x,c;c=0;
	cin>>x;
	while(x)
	{
		if(x&1==1)
			c++;
		x>>=1;
	}
	cout<<c;
	return 0;
}
