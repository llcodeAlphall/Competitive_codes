#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

void merge(int l,int m,int r,ui arr[])
{
	int l1,l2,h1,h2,k,i;
	l1=l;l2=m+1;h1=m;h2=r;k=0;
	ui brr[10000];
	while(l1<=h1 && l2<=h2)
		{
			if(arr[l1]<arr[l2])
				brr[k++]=arr[l1++];
			else
				brr[k++]=arr[l2++];
		}
	while(l1<=h1)
		brr[k++]=arr[l1++];
	while(l2<=h2)
		brr[k++]=arr[l2++];
	k=0;
	for(i=l;i<=r;i++)
		arr[i]=brr[k++];
}
void merge_algo(int l,int r,ui arr[])
{
	int m;
	m=(l+r)/2;
	if(m<r)
	{
		merge_algo(l,m,arr);
		merge_algo(m+1,r,arr);
		merge(l,m,r,arr);
	}
}

int main()
{
	ull n,i;
	cin>>n;
	ui arr[100000];
	for(i=0;i<2*n;i++)
		cin>>arr[i];	
	merge_algo(0,2*n-1,arr);
	ull sum=0;
	for(i=0;i<2*n-1;i+=2)	
		sum+=arr[i];
	cout<<sum;
	return 0;
}
