#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

void input(int n,int arr[])
{
	int i;
	for(i=0;i<n;i++)
		cin>>arr[i];
}
void display(int n,int arr[])
{
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int partition(int l,int h,int arr[])
{
	int i,j,pivot,temp;	
	i=l;j=h+1;pivot=arr[l];	
	while(i<j)
	{
		do
		{
			i++;	
		}while(arr[i]<=pivot);
		do
		{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	}
	temp=arr[l];
	arr[l]=arr[j];
	arr[j]=temp;
	return j;
}
void quick_sort(int l,int h,int arr[])
{
	int j;
	if(l<h)
	{
		j=partition(l,h,arr);
		quick_sort(l,j,arr);
		quick_sort(j+1,h,arr);
	}
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n]={};
	
	//input
	input(n,arr);
	
	//sort
	quick_sort(0,n-1,arr);
	
	//display
	display(n,arr);
	
	return 0;
}
