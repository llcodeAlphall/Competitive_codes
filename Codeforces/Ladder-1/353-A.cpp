#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x,y,t;t=0;
	int top,bottom;top=bottom=0;
	cin>>n;
	if(n==1)
	{
		cin>>x>>y;
		if(x%2!=0 || y%2!=0)
			{
				cout<<-1;
				return 0;
			}
	}
	for(i=1;i<=n;i++)	
		{
			cin>>x>>y;
			if((x%2!=0 && y%2==0)|| (x%2==0 && y%2!=0 ))
				t++;			
			if(x%2!=0)
				top++;
			if(y%2!=0)
				bottom++;			
		}	
	if(top%2==0 && bottom %2==0)
		cout<<0;
	else if( (top%2!=0 && bottom %2==0) || (top%2==0 && bottom %2!=0) )
		cout<<-1;
	else
	{
		if(t>0)
			cout<<1;
		else 
			cout<<-1;
	}
	return 0;
}
