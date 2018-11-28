#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,min,max,minpos,maxpos,no;
	cin>>n;
	int i;
	min=INT_MAX;
	max=INT_MIN;
	minpos=maxpos=0;
	for(i=0;i<n;i++)
	{
		cin>>no;
		if(max<no)
			{
				max=no; maxpos=i;
			}
		if(min>=no)
			{
				min=no;minpos=i;
			}
	}
	if(minpos>maxpos)
	{
		cout<<(n-minpos + maxpos-1);
	}
	else
	{
		cout<<(maxpos + (n-minpos-1) -1);
	}
	return 0;
}
