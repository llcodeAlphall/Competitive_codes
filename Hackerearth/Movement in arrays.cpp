#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

int prime_d[12]={2,3,5,7,11,13,17,19,23,29,31,37};
ull arr[40]={0};
int flag;
void func(int n,int m,int cur)
{
	if(flag==1)
		return;
	if(m==0 && cur==n-1)
		{
			flag=1;
			return ;
		}
	else if(m==0 && cur!=n-1)
		return ;
	else
	{
		int i;
		for(i=0;i<12;i++)
			{
				if(arr[cur]%prime_d[i]==0 && flag==0)
					{
						if(cur+prime_d[i]<=n-1 && flag==0)
							func(n,m-1,cur+prime_d[i]);
						if(cur-prime_d[i]>=0 && flag==0)
							func(n,m-1,cur-prime_d[i]);
					}
			}
	}
	
}

int main()
{
	int n,t,i,m;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
		cin>>m;
		func(n,m,0);
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}	
	return 0;
}


