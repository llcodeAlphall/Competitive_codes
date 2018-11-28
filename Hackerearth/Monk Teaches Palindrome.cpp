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
	ull n,i;
	cin>>n;
	bool flag;
	while(n--)
		{
			string str;
			cin>>str;
			flag=false;
			ull l=str.size();
			
				for(i=0;i<l/2;i++)
					if(str[i]!=str[l-1-i])
						{
							flag=true;
							break;
						}
			if(flag)
				cout<<"NO\n";
			else
				{
					cout<<"YES ";
			
					if(l%2==0)
						cout<<"EVEN\n";	
					else
						cout<<"ODD\n";
				}
		}
	return 0;
}
