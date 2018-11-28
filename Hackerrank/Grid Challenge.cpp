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
	ull t,n,i,j;
	cin>>t;
	bool flag;
	while(t--)
	{
		cin>>n;
		char arr[n][n];		
		for(i=0;i<n;i++)
			{				
				for(j=0;j<n;j++)
						cin>>arr[i][j];
				sort(arr[i],arr[i]+n);
			}
		flag=0;
		for(i=0;i<n;i++)
			{
				for(j=0;j<n-1;j++)
					{
						if(arr[j][i]>arr[j+1][i])
							{
								flag=1;
								break;
							}
					}
			}
		if(flag==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";			
	}
	return 0;
}
