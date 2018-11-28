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
	int m[21][21];
	ull t,n,i,j,p,q,c;
	c=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>m[i][j];
		c=0;
		for(p=0;p<n;p++)
			for(q=0;q<n;q++)	
				for(i=0;i<=p;i++)
					for(j=0;j<=q;j++)
						if(m[i][j]>m[p][q])	
							c++;
		cout<<c<<endl;
	}
	return 0;
}
