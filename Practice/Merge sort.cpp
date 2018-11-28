#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

void input(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>arr[i];
}

void merge(int l,int m,int r,int arr[])
{
	int l1,l2,h1,h2;
	l1=l;h1=m;l2=m+1;h2=r;
	int temp[r-l+1]={};
	int k=0;
	while(l1<=h1 && l2<=h2)
	{
		if(arr[l1]<arr[l2])
			temp[k++]=arr[l1++];
		else
			temp[k++]=arr[l2++];
	}
	while(l1<=h1)
		temp[k++]=arr[l1++];
	while(l2<=h2)
		temp[k++]=arr[l2++];
	k=0;
	int i;
	for(i=l;i<=r;i++)
		arr[i]=temp[k++];
}
void merge_algo(int l,int r,int arr[])
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

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n]={};	
	input(arr,n);
	
	cout<<endl;
	display(arr,n);
	
	merge_algo(0,n-1,arr);
	
	cout<<endl;
	display(arr,n);
	
	return 0;
}
