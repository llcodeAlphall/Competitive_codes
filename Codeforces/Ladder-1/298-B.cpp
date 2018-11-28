#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	int t;
	int sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	int i,k;k=0;
	for(i=0;i<t;i++)
	{
		cin>>ch;
		if(sx!=ex || sy!=ey)
		{
			k++;
			
			if(ex>sx && ch=='E')
				sx++;
			else if(ex<sx && ch=='W')
				sx--;
			if(ey>sy && ch=='N')
				sy++;
			else if(ey<sy && ch=='S')
				sy--;
		}
	}
	if(sx!=ex || sy!=ey)
		cout<<-1;
	else
		cout<<k;
	return 0;
}
