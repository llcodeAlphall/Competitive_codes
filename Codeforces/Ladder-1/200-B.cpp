#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,no;
	double ans;ans=0.00;
	cin>>n;
	int i;
	for (i=0;i<n;i++)
	{
		cin>>no;
		ans+=no;
	}
	ans/=n;
	cout<<ans;
	return 0;
}
