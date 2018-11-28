#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	int n,k,i,j;
	cin>>n>>k;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				
				if(i==j)
					cout<<k<<" ";
				else
					cout<<0<<" ";
			}
			cout<<endl;
		}
	return 0;
}
