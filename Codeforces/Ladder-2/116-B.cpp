#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)

int main()
{
	ui n,m,i,j;
	cin>>n>>m;
	char arr[12][12];	
	f(i,0,11)f(j,0,11)arr[i][j]='.';
	f(i,1,n)f(j,1,m)cin>>arr[i][j];
	ui c=0;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				{
					if(arr[i][j]=='P')
						{
							if( arr[i][j+1]=='W')
								{
									arr[i][j+1]='.';
									c++;
								}
							else if( arr[i][j-1]=='W')
								{
									arr[i][j-1]='.';
									c++;
								}
							else if( arr[i-1][j]=='W')
								{
									arr[i-1][j]='.';
									c++;
								}
							else if( arr[i+1][j]=='W')
								{
									arr[i+1][j]='.';
									c++;
								}
						}
				}
		}
	cout<<c;
	return 0;
}
