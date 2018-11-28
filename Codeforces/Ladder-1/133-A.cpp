#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int flag=1;
	int i;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='H' || str[i]=='9' || str[i]=='Q' )
			{
				cout<<"YES";
				return 0;
			}		
	}
	cout<<"NO";
	return 0;
}
