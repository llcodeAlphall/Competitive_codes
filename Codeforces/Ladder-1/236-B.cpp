#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,count;
	cin>>a>>b>>c;
	int  ans=0;
	vector<int> f(a*b*c+1);
	for(i=1;i<=a*b*c;i++)
		{
			for(j=i;j<=a*b*c;j+=i)
				f[j]++;
		}

	for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
				{
					for(k=1;k<=c;k++)
						{								
							ans+=f[i*j*k];
						}
				}
		}
	cout<<ans;
	return 0;
}
