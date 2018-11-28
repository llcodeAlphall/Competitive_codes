#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

#define n 11
set<pair<int,int>> ans;
void find_moves(int posx,int posy,int m)
{
	if(m<=0)
		{
			ans.insert(make_pair(posx,posy));
			return;
		}		
	if((posx+2) <=10 && (posy+1)<=10)
		find_moves(posx+2,posy+1,m-1);		
	
	if((posx+2) <=10 && (posy-1)>=1)	
		find_moves(posx+2,posy-1,m-1);		
		
	if((posx-2) >=1 && (posy+1)<=10)	
		find_moves(posx-2,posy+1,m-1);		
	
	if((posx-2) >=1 && (posy-1)>=1)	
		find_moves(posx-2,posy-1,m-1);		
		
	if((posy+2) <=10 && (posx+1)<=10)	
		find_moves(posx+1,posy+2,m-1);		
	
	if((posy+2) <=10 && (posx-1)>=1)	
		find_moves(posx-1,posy+2,m-1);			
	
	if((posy-2) >=1 && (posx+1)<=10)	
		find_moves(posx+1,posy-2,m-1);		
	
	if((posy-2) >=1 && (posx-1)>=1)		
		find_moves(posx-1,posy-2,m-1);		
	
	return;
}
int main()
{
	int posx,posy,m;
	cin>>posx>>posy>>m;
	find_moves(posx,posy,m);
	cout<<ans.size()<<endl;
	return 0;
}
