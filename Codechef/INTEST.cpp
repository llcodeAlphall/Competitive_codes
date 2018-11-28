#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int i,sum,j,count;count=0;
	string str;
	
	for(i=0;i<n;i++)
	{
		str="";
		cin>>str;
		sum=0;		
		for(j=0;j<str.size();j++)
		{
			sum+=int(str[j])-48;
		}		
		cout<<sum<<endl;
		if (sum%k==0)
			count++;
	}
	cout<<count;
	return 0;
}
