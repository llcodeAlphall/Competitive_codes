#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
int main()
{
	ll n,i;
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	ll flag=0;
	ll pos;
	for(i=0;i<n-1;i++)
		if(arr[i]>arr[i+1])
			{
				flag=1;
				pos=i;
				break;
			}
	if(flag==0)
		{
			cout<<"yes\n1 1";
		}
	else
		{
			for(i=pos;i<n-1;i++)
				{
					if(arr[i]>arr[i+1])
						{
							
						}
				}
		}
	
	return 0;
}
