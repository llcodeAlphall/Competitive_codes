#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string str;
	char ch;
	cin>>str;
	int i;
	transform(str.begin(),str.end(),str.begin(),::tolower);
	for(i=0;i<str.size();i++)
	{
		ch=str[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
			continue;
		else
			cout<<'.'<<ch;
	}
	return 0;
}



