#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,j,k,sp;
	cin>>n;
	sp=2*n;
	for(i=0;i<=n;i++)
		{
			for(k=1;k<=sp;k++)
				cout<<" ";
			sp-=2;
			for(j=0;j<=i;j++)
				{
					cout<<j;
					if(i>0)
						cout<<" ";
				}
			for(j=i-1;j>=0;j--)
			{
				cout<<j;
				if(j>0)
					cout<<" ";
			}
			
			cout<<endl;
		}
	sp=2;
	for(i=n-1;i>=0;i--)
		{
			for(k=1;k<=sp;k++)	
				cout<<" ";
			sp+=2;
			for(j=0;j<=i;j++)
				{
					cout<<j;
					if(i>0)
						cout<<" ";
				}
			for(j=i-1;j>=0;j--)
				{
					cout<<j;
					if(j>0)
						cout<<" ";
				}
			cout<<endl;
		}
	return 0;
}



