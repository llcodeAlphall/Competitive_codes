#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin>>str;
	int i,flag;flag=0;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
			{
				i+=2;
				if(flag==1)
					{
						cout<<" ";
						flag=0;
					}
			}
		else
		{
			cout<<str[i];
			flag=1;
		}
	}
	return 0;
}
