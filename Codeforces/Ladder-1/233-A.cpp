#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	int n,i;
	cin>>n;
	if(n%2!=0)	
		cout<<-1;
	else
		{
			for(i=1;i<=n;i+=2)	
				{
					cout<<i+1<<" "<<i<<" ";
				}
		}
	*/
	int n;
	cin>>n;
	if(n%2!=0)
		cout<<-1;
	else
	{
		while(n)
			cout<<n--<<" ";
	}
	return 0;
}
