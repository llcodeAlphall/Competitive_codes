#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,no,x,y;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
			{
				cin>>no;
				if(no==1)
					{
						x=i;
						y=j;
						break;
					}
			}
	}
	
	int count;
	count=abs(x-3)+abs(y-3);
	cout<<count;
	return 0;
}
