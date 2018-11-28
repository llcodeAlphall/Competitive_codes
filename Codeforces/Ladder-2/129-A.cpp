#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,no,o,e;
	cin>>n;
	o=e=0;
	for(i=0;i<n;i++)
	{
		cin>>no;
		if(no%2==0)
			e++;
		else 
			o++;			
	}
	if(o%2==0)
	{
		cout<<e;
	}
	else 
		cout<<o;
	return 0;
}
