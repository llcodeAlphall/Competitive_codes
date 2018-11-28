#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z,no;
	x=y=z=0;
	cin>>n;
	while(n)
	{
		n--;
		cin>>no;
		x+=no;
		cin>>no;
		y+=no;
		cin>>no;
		z+=no;
	}
	if (x==0)
		if(y==0)
			if(z==0)
				{
					cout<<"YES";
					return 0;
				}
				
	cout<<"NO";
	return 0;
}
