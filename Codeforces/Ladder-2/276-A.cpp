#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int n,k,f,t,i;
	long long int max,temp;max=LONG_MIN;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>f>>t;
		if(t>k)
			temp = f-t+k;
		else
			temp = f;
		if(max<temp) 
			max=temp;
	}
	cout<<max;
	return 0;
}
