#include<bits/stdc++.h>
using namespace std;
int testprime(int x)
{
	
}
int main()
{
	int m,n;
	cin>>n>>m;
	int i,j;
	int flag=0;
	for(i=2;i<=m/2;i++)
		if(m%i==0)
		{			
			flag=1;		
			break;
		}
		
	if(flag==0)
		{
			for(i=n+1;i<m;i++)
			{
				flag=0;
				for(j=2;j<=i/2;j++)
					{
						if(i%j==0)
						{
							flag=1;
						}
					}
				if(flag==0)
					{	
						cout<<"NO";		
						return 0;					
					}	
			}
			cout<<"YES";
		}
	else
		cout<<"NO";
	return 0;
}
