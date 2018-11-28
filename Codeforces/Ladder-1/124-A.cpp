#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,a,b,ans,sum;
	cin>>n>>a>>b;
	int i,j;
	ans=0;
	for(i=0;i<=b;i++)
		{			
		for(j=a;;j++)
			{
				sum=i+j;
				if(sum>n)
					break;
				else if(i+j==n-1)
					{
						ans++;
					}
			}
		}
	cout<<ans;
	return 0;
}



