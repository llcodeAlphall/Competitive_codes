#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double

int main()
{
	int n,i,no;
	int a,b;b=0;
	int arr[1001];
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<0)	
				b++;
		}
	b--;	
	for(i=0;i<n;i++)
		if(arr[i]<0)
			{
				a=i;
				break;
			}
			
	cout<<"1 "<<arr[a]<<endl;
	
	if(b%2!=0)
	{
		for(i=a+1;i<n;i++)
			if(arr[i]<0)
				{
					b=i;
					break;
				}
		cout<<n-3<<" ";
		for(i=0;i<n;i++)
			{
				if(i!=a && i!=b && arr[i]!=0)
					cout<<arr[i]<<" ";
			}
		cout<<endl<<"2 0 "<<arr[b];		
	}
		
	else
	{
		cout<<n-2<<" ";
		for(i=0;i<n;i++)
			{
				if(i!=a && arr[i]!=0)
					cout<<arr[i]<<" ";
			}
		cout<<endl<<"1 0 ";
	}
	
	
	return 0;
}
