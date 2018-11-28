#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

void merge(int l, int m, int r, string arr[])
{
	int i,k,l1,h1,l2,h2;
	l1=l;h1=m;l2=m+1;l2=r;k=0;
	string temp[55];
	while(l1<=h1 && l2<=h2)
	{
		if(arr[l1].size() <= arr[l2].size())
			temp[k++] = arr[l1++];
		else
			temp[k++] = arr[l2++];
	}
	while(l1<=h2)
		temp[k++] = arr[l1++];
	while(l2<=h2)
		temp[k++] = arr[l1++];
	k=0;
	for(i=l;i<=r;i++)	
		arr[i]=temp[k++];	
}

void merge_algo(int l,int r,string arr[])
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

void display(int n,string arr[])
{
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	ull t;
	cin>>t;
	int i,n;
	string str,mtr;	
	char ch;
	while(t--)
	{
		n=0;
		string arr[55];
		//cin>>ch;
		getline(cin,str);
		//cout<<"--"<<str<<"--";
		//cout<<"="<<str<<"=";
		mtr="";
		for(i=0;i<str.size();i++)
		{
			mtr+=str[i];
			if(str[i]==' ')
				arr[n++]=mtr;
			mtr="";
		}		
		//merge_algo(0,n-1,arr);
		sort(arr,arr+n);
		//display(n,arr);
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
	
		cout<<endl;			
	}
	return 0;
}
