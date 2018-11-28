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
	ull t,i;
	string str;
	cin>>t;
	int flag;
	while(t--)
	{
		flag=0;
		ui arr1[125]={};
		cin>>str;		
		for(i=0;i<str.size();i++)
			arr1[int(str[i])]=1;
		
		ui arr2[125]={};	
		cin>>str;		
		for(i=0;i<str.size();i++)
			arr2[int(str[i])]=1;
			
		for(i=0;i<125;i++)
			if((arr1[i]==1) && (arr2[i]==1))
				{
					cout<<"Yes\n";
					flag=1;
					break;
				}
		if(flag==0)
			cout<<"No\n";
	}
	return 0;
}
