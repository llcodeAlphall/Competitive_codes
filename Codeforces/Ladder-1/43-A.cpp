#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str1,str2;str1=str2="";
	string str;
	int c1,c2;c1=c2=0;
	cin>>str1;
	c1++;
	n--;
	while(n--)
	{
		cin>>str;
		if(str==str1)
			{
				c1++;
			}
		else
			{
				c2++;
				str2=str;
			}
	}
	if(c1>c2)
		cout<<str1;
	else
		cout<<str2;
	return 0;
}
