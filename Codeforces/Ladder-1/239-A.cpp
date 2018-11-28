#include<bits/stdc++.h>
using namespace std;

int main()
{
	int y,n,k;
	cin>>y>>k>>n;
	int i,flag;flag=0;
	
	for(i=1;k*i<=n;i++)
		{
			if(k*i>y)
			{
				cout<<k*i-y<<" ";
				flag++;
				break;
			}
			
		}
	
	if(flag>0)
		{
			i++;
			i=i*k-y;
			for(;i<=n-y;i+=k)
				cout<<i<<" ";
		}
	else
		cout<<-1;
	return 0;
}
