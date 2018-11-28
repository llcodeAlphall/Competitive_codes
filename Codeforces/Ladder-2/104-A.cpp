#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	n-=10;
	if(n>0 && n<12)
	{
		if(n==11)
			cout<<1*4;
		else if(n==10)
			cout<<4*4-1;
		else
			cout<<1*4;
	}
	else
		cout<<"0";
	return 0;
}
