#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int a,b,n,temp;int i,j;
	cin>>a>>b>>n;
	for(i=0;i<=9;i++)
		{
			temp=a*10+i;
			if(temp%b==0)
				{
					cout<<a<<i;
					for(j=1;j<=n-1;j++)
						cout<<0;
					return 0;
				}				
		}
	cout<<-1;
	return 0;
}
