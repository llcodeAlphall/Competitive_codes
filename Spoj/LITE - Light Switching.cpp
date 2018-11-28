#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,i,j,c;c=0;
	scanf("%lld%lld",&n,&m);
	cout<<n<<m;
	
	vector<int> arr(n+1);
	int o,a,b;	
	for(i=1;i<=m;i++)
		{
			scanf("%d%d%d",&o,&a,&b);
			if(o==0)
				{
					for(j=a;j<=b;j++)
						{
							arr[j]++;
						}
				}
			else
			{
				c=0;
				for(j=a;j<=b;j++)
					{
						if(arr[j]%2!=0)	
							c++;
					}			
				printf("%lld\n",c);
			}
		}
	return 0;
}
