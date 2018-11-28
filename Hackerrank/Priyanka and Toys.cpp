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
	ull i,n,c,cur;c=1;
	cin>>n;
	ull arr[n]={0};
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	cur=arr[0];	
	for(i=0;i<n;i++)
		{
			if(arr[i]>cur+4)
				{					
					c++;
					cur=arr[i];
				}			
		}
    cout<<c;
	return 0;
}
