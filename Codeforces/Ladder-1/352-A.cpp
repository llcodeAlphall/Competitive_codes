#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,no;
	cin>>n;
	int i;
	int f,z;f=z=0;
	for(i=1;i<=n;i++)
	{
		cin>>no;
		if(no==5)
			f++;
		else
			z++;
	}
	if(z==0)
	{
		cout<<-1;
		return 0;
	}
	if(f<9)
		{
			cout<<0;
			return 0;
		}
	for(i=1;i<=f/9;i++)
		cout<<555555555;
	for(i=1;i<=z;i++)
		cout<<0;
	return 0;
}
