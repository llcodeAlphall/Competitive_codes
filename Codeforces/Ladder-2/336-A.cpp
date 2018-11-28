#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int x,y;
	
	cin>>x>>y;
	if( x>0 && y>0)
		cout<<setprecision(10)<<"0 "<<ceil(abs(x)+abs(y))<<" "<<ceil(abs(x)+abs(y))<<" 0";
	else if(x>0 && y<0)
		cout<<setprecision(10)<<"0 "<<ceil(abs(x)+abs(y))*(-1)<<" "<<ceil(abs(x)+abs(y))<<" 0";		
	else if(x<0 && y>0)
		cout<<setprecision(10)<<ceil(abs(x)+abs(y))*(-1)<<" 0 0 "<<ceil(abs(x)+abs(y));
	else
		cout<<setprecision(10)<<ceil(abs(x)+abs(y))*(-1)<<" 0 0 "<<ceil(abs(x)+abs(y))*(-1);
	return 0;
}
