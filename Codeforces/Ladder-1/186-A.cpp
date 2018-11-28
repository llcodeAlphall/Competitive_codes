#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	
	if(str1.size()==str2.size())
	{
		int c,i;c=0;
		string str3,str4;
		str3=str1;str4=str2;
		sort(str3.begin(),str3.end());
		sort(str4.begin(),str4.end());
		if(str3==str4)
		{
			for(i=0;i<str1.size();i++)
				{
					if(str1[i]!=str2[i])
						c++;
				}
			if(c<=2)
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
			cout<<"NO";
		
	}
	else
	{
			cout<<"NO";	
			return 0;
	}

	return 0;
}
