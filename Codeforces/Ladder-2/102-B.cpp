#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double

int main()
{
	string str="";
	cin>>str;
	ull i,ans,sum;ans=0;
	while(str.size() > 1)
	{
		ans++;
		sum=0;
		for(i=0;i<str.size();i++)
			sum=sum+int(str[i])-48;			
		str=to_string(sum);
	}
	cout<<ans;
	return 0;
}
