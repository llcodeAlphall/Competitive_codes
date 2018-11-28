#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)
#define sull(i) scanf("%llu",&i)

int main()
{
	ull arr[125]={};
	ull n,i; 
	cin>>n;	
	char no;
	for(i=0;i<n;i++)
		{
			cin>>no;
			arr[int(no)]++;
		}
	arr[int('a')]/=2;
	arr[int('e')]/=2;
	arr[int('h')]/=2;
	arr[int('r')]/=2;
	
	ull m;m=(INT_MAX);
	m=min(m,arr[int('a')]);
	m=min(m,arr[int('c')]);
	m=min(m,arr[int('e')]);
	m=min(m,arr[int('k')]);
	m=min(m,arr[int('h')]);
	m=min(m,arr[int('r')]);
	m=min(m,arr[int('t')]);
	cout<<m;
	return 0;
}
