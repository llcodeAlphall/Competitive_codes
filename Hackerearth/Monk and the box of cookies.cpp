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
	ull t,n,i,no;
	int pos,m,k;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&n);
		ull arr[32]={};
		while(n--)
		{
			scanf("%llu",&no);
			k=0;
			while(no>0)
			{
				if(no%2!=0)
					arr[k]++;
				no/=2;	k++;			
			}
		}			
		pos=0;
		m=0;
		for(i=0;i<32;i++)
		{
			if(m < arr[i])
			{
				m=arr[i];
				pos=i;
			}
		}
		cout<<pos<<endl;
	}	
	return 0;
}
