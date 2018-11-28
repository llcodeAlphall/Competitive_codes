#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;x=0;
	cin>>n;
	char in1,in2,in3;
	while(n--)
	{
		cin>>in1>>in2>>in3;
		if(in2=='-')
			x--;
		else
			x++;		
	}
	cout<<x;
	return 0;
}
