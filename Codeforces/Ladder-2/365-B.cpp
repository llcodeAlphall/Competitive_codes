#include<bits/stdc++.h>

using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double

int main()
{
	ui n,i;
	cin>>n;
	ull arr[100000+5];
	for(i=0;i<n;i++)
		cin>>arr[i];
	if(n==1)
	{
		cout<<n;
		return 0;
	}
	else if(n==2)
	{
		cout<<n;
		return 0;
	}
	else
	{
		ui c,m;c=2;m=0;
		for(i=2;i<n;i++)
		{
			if(arr[i]==(arr[i-1]+arr[i-2]))
				c++;
			else
				c=2;	
			m=max(c,m);
		}
		cout<<m;
	}	
	return 0;
}
