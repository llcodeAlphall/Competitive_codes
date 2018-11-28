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
	string str1,str2;
	
	ull ans;
	cin>>t;
	while(t--)	
	{
		cin>>str1>>str2;
		int arr1[150]={};
		int arr2[150]={};
		for(i=0;i<str1.size();i++)
			arr1[int(str1[i])]++;
		
		for(i=0;i<str2.size();i++)
			arr2[int(str2[i])]++;		
		ans=0;
		for(i=64;i<125;i++)
				ans+=abs(arr1[i]-arr2[i]);
		cout<<ans<<"\n";		
	}
	return 0;
}
