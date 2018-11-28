#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	long long n,i,m,pos;m=pow(10,9);
	cin>>n;
	long long arr[n];
	
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		arr[i]=(arr[i]-(i+1))/n;
	for(i=0;i<n;i++)
		arr[i]=(i+1)+arr[i]*n;
	for(i=0;i<n;i++)
	{
		if(m>arr[i])
		{
			m=arr[i];
			pos=i+1;
		}		
	}
	cout<<pos;
	return 0;
}
