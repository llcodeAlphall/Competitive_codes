#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

bool flag=false;

bool func(ull a,ull b)
{
	return a>b;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ull n,i;
	cin>>n;
	ull arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,func);
	
	ull pos;pos=0;
	int flag=0;
	for(i=1;i<n;i++)
		if(arr[0]!=arr[i])
			flag=1;
	if(flag==0)
		{
			cout<<-1;
			return 0 ;
		}
	for(i=0;i<n-1;i++)	
		{
			if(arr[i]%arr[i+1]==0)
				pos++;
			else
				break;
		}
	
	if(pos==n-1)
		cout<<"1";
	else
		cout<<n-pos-1;
	return 0;
}
