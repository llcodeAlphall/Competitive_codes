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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	ull n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ull arr[n]={};
		ull cur,prev;
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		cur=prev=0;
		ull score=0;
		for(i=0;i<n;i++)
			{
				if(arr[cur]>=arr[i])
					continue;
				else
				{
					score=max(score,(i-prev)*(cur+1));
					prev=cur;
					cur=i;
				}
			}
		cout<<score<<endl;
	}
	
	return 0;
}
