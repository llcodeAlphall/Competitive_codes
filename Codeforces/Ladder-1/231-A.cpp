#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y,z;
	cin>>n;
	int i;
	int count;count=0;
	for(i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		if(x==1 && (y==1 || z==1))
			count++;
		else if(y==1 && z==1)
			count++;
	}
	cout<<count;
	return 0;
}
