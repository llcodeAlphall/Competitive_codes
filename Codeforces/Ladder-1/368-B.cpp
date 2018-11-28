#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,b,c,i;
	cin>>n>>a>>b>>c;
	intarr[4001][4];
	for(i=0;i<4001;i++)
		arr[0][i]=0;
	for(i=0;i<4;i++)
		arr[i][0]=0;
	for(i=1;i<4001;i++)
		{
			if(i<a)
				arr[1][i]=arr[0][i];
			else
				{
					arr[1][i]=max();
				}
		}
	
	return 0;
}
