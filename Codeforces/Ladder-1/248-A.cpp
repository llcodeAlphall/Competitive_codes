#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int r0,r1,l0,l1;r0=r1=l0=l1=0;
	int no;
	while(n--)
	{		
		cin>>no;
		if(no==0)
			l0++;
		else
			l1++;
		cin>>no;
		if(no==0)
			r0++;
		else
			r1++;
	}
	int ans;
	ans=0;
	if(l1>l0)
		ans+=l0;
	else
		ans+=l1;
		
	if(r1>r0)
		ans+=r0;
	else
		ans+=r1;
	cout<<ans;
	return 0;
}
