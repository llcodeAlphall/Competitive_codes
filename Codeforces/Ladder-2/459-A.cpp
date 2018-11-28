#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double

double dist(int x1,int y1,int x2,int y2)
{
	db d;
	d=sqrt( pow((x1-x2),2) + pow((y1-y2),2) );
	return d;
}

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;	
	cin>>x1>>y1>>x2>>y2;
	db d = 0.00;
	if(x1!=x2 && y1==y2)
		{
			d=dist(x1,y1,x2,y2);
			x3 = x1; 
			x4 = x2; 
			if(y1 + d < 1000)
			{
				y3 = y1 + d;
				y4 = y1 + d;
			}
			else
			{
				y3 = y1 - d;
				y4 = y1 - d;
			}		
		}
	else if(x1!=x2 && y1!=y2)
		{		
			if(abs(x2-x1)!=abs(y2-y1))
			{
					cout<<-1;
					return 0 ;
			}	
			else
			{
				x3 = x1; x4 = x2;
				y3 = y2; y4 = y1;
			}
		}
	else if(x1==x2 && y1!=y2)
		{
			d=dist(x1,y1,x2,y2);
			y3 = y1; 
			y4 = y2; 
			if(x1 + d < 1000)
			{
				x3 = x1 + d;
				x4 = x1 + d;
			}
			else
			{
				x3 = x1 - d;
				x3 = x1 - d;
			}		
		}
	else
	{
		cout<<-1;
		return 0;
	}
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	return 0;
}
