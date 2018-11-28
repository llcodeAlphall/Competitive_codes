#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long

#define db double

int main()
{
	ui n,i,a;
	ui arr[3007];
	for(i=0;i<3007;i++)
		arr[i]=0;
		
	cin>>n;
	for(i=1;i<=n;i++)
		{
			cin>>a;
			arr[a]=1;
		}
	for(i=1;i<=n+1;i++)
		if(arr[i]==0)
			{
				cout<<i;
				break;
			}
	return 0;
}
