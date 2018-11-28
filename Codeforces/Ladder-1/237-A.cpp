#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,max,n,i,curx,cury,curmax;max=1;curmax=1;
	cin>>n;
	cin>>curx>>cury;
	for(i=1;i<n;i++)
	{
		cin>>x>>y;
		if(x==curx &&y==cury)
			{
				curmax++;
			}
		else
			{
				curx=x;cury=y;
				curmax=1;
			}
		if(max<curmax)
			max=curmax;
	}	
	cout<<max;
	return 0;
}
