#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int no;
	int in;in=0;
	int cap;cap=0;
	cin>>n;
	while(n--)
	{
		cin>>no;
		in-=no;
		cin>>no;
		in+=no;
		if(cap<in)
			cap=in;
	}
	cout<<cap;
	return 0;
}
