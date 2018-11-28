#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	cin>>str;
	int i,j,flag;
	char ch=str[0];
	if(str.size()<7)
	{
		cout<<"NO";
		return 0;
	}
	for(i=0;i<=str.size()-7;)
	{
		flag=0;
		for(j=i;j<i+7;j++)
			{
				if(str[j]==ch)
					continue;
				else
				{
					ch=str[i];
					i=j;
					flag=1;
					break;
				}
			}
		if(flag==0)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}



