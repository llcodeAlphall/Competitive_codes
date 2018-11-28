#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double

int main()
{
	ull n,k,i;
	ll sum,no;sum=0;
	cin>>n>>k;
	
	for(i=1;i<=n;i++)
	{
		cin>>no;
		
		if(no<0)
		{
			if(k>0)
			{
				sum+=no*(-1);
				k--;
			}
			else
				sum+=no;
		}
		
		else
		{
			if(k>0)
			{
				if(k%2==0)
					sum+=no;
				else
					sum+=no*(-1);
				k=0;
			}
			else
				sum+=no;
		}
	}
	cout<<sum;
	return 0;
}
