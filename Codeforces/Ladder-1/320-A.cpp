#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int i;
	for(i=0;i<str.size();i++)
		{
			if(str[i]=='1')
				{
					if(str[i+1]=='4' && str[i+2]=='4')
						i+=2;
					else if(str[i+1]=='4')
						i++;
					
				}
			else	
				{
					cout<<"NO";
					return 0;
				}
		}
	cout<<"YES";
	return 0;
}
