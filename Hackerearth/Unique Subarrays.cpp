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
	ui t,n,i,j,w,k;
	ull cur;
	cin>>t;
	bool flag;
	while(t--)
	{
		w=0;k=0;
		cin>>n;
		ull arr[n]={};
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++)
			{
				cur=arr[i];
				flag=false;
				for(j=k;j<i;j++)
					{
						if(arr[j]==arr[i])
							{
								flag=true;
								k=i+1;
								break;
							}
					}
				if(flag==false)
					w=w+(k-i+1)*(k-i+2)/2;
			}
		cout<<w<<endl;
	}
	return 0;
}
