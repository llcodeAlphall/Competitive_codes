#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	/*int r,c,i,j,flag,ans,temp;ans=0;
	char arr[11][11],ch;
	int x[11];
	int y[11];
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)	
			{
				cin>>arr[i][j];
				if(arr[i][j]=='S')
					{
						x[i]=-1;
						y[j]=-1;
					}
			}
	for(i=0;i<r;i++)		
		{
			if(x[i]!=-1)
				{
				
					temp=0;
					for(j=0;j<c;j++)
						{
							temp++;
							arr[i][j]='!';
						}
					ans+=temp;
				}
		}
	for(i=0;i<c;i++)		
		{			
			if(y[i]!=-1)
				{								
					temp=0;
					for(j=0;j<r;j++)
						{
							if(arr[j][i]=='.')
								temp++;							
						}
					ans+=temp;
				}
		}
	cout<<ans;*/
	int i,j,R,C;
	set<int> r,c;
	char ch;
	cin>>R>>C;
	for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				{
					cin>>ch;
					if(ch=='S')
					{
						r.insert(i);
						c.insert(j);
					}
				}
		}
	cout<<R*C-r.size()*c.size();
	return 0;
}
