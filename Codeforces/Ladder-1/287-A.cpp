#include<bits/stdc++.h>
using namespace std;
int i,j,arr[4][4];
bool f(int x,int y)
	{
		return arr[x][y]=='#';
	}
int main()
{	
	char ch;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			{
				cin>>ch;arr[i][j]=ch;
			}
			
	for(i=0;i<3;i++)			
		for(j=0;j<3;j++)
				if((f(i,j)+f(i,j+1)+f(i+1,j)+f(i+1,j+1))!=2)
					{
						cout<<"YES";return 0;
					}
	cout<<"NO";
	return 0;
}
