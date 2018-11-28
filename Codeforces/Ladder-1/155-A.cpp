#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,no;
	cin>>n;
	int count=0;
	int max,min;
	cin>>no;
	min=max=no;
	n--;
	while(n--)
	{
		cin>>no;
		if(min>no)
		{
			min=no;
			count++;
		}
		if(max<no)
		{
			max=no;
			count++;
		}
	}
	cout<<count;
	return 0;
}
