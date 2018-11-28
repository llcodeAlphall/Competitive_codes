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
	int t,i,n;
	cin>>t;
	int max1,max2,min1,min2;
	while(t--)
	{
		cin>>n;
		int arr[n]={};
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		max1=max2=0;
		min1=min2=INT_MAX;
		
		for(i=0;i<n;i++)
		{
			max1=max(max1,arr[i]+i);
			min1=min(min1,arr[i]+i);
			
			max2=max(max2,arr[i]-i);
			min2=min(min2,arr[i]-i);
		}		
		cout<<int(max((max1-min1),(max2-min2)))<<endl;
	}
	return 0;
}
