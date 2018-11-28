#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int i,s;s=0;
	for(i=0;i<str.size();i++)
	{
		if(int(str[i])>96)
			s++;		
	}
	if(str.size()%2==0)
		{
			if(s >= (str.size()/2) ) 
				{
					transform(str.begin(), str.end(), str.begin(), ::tolower);
					cout<<str;
				}
			else
			{
				transform(str.begin(), str.end(), str.begin(), ::toupper);
				cout<<str;
			}
			
		}
	else
	{
		if(s<=(str.size()/2))
		{
			transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout<<str;
		}
		
		else
			{
				transform(str.begin(), str.end(), str.begin(), ::tolower);
				cout<<str;
				
			}
	}
	return 0;
}
