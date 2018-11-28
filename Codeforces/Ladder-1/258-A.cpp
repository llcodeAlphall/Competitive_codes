#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i,pos;pos=-1;
	for(i=0;i<str.size()-1;i++)
	{
		if(str[i]=='0')
			{
				pos=i;
				break;
			}
		cout<<str[i];
	}
	if(pos!=-1)
		for(i=pos+1;i<str.size();i++)
			cout<<str[i];

	return 0;
}
