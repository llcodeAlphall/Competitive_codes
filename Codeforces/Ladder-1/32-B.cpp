#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i;
	string count;count="";
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='.')
			count+='0';
		else if(str[i]=='-'&&str[i+1]=='.')
		{
			count+='1';
			i++;
		}
		else
		{
			count+='2';
			i++;
		}
	}
	cout<<count;
	return 0;
}
