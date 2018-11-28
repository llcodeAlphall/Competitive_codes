#include<bits/stdc++.h>
using namespace std;
#define ui unsigned int
#define ll long long
#define ull unsigned long long
#define db double
#define f(i,a,b) for(i=a;i<=b;i++)
#define sui(i) scanf("%u",&i)

bool flag=false;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ull n,i,j;
	cin>>n;
	
	for(i=1;i<n;i++)
		{
			if(i%3!=0)
				{
					for(j=i;j<n;j++)
						{
							if(j%3!=0)
								{
									if((n-(i+j))%3!=0)
									{
										cout<<i<<" "<<j<<" "<<n-(i+j);
										return 0;
									}
								}
						}
				}
			
		}
	
	return 0;
}
