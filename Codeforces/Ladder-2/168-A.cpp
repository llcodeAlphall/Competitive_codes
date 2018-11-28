#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	db n,x,y,temp;
	cin>>n>>x>>y;
	temp=(n*y)/100-x;
	if(temp>=0)
		cout<<ceil(temp);
	else
		cout<<ceil(0);
	
	return 0;
}
