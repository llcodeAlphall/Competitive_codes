#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i,c;c=0;
	int arr[200]={};
	for(i=0;i<str.length();i++)
		arr[str[i]]++;
	for(i=97;i<123;i++)
		if(arr[i]%2!=0)
			c++;
	if(c==0)
		cout<<"First";
	
	else if(c%2==0)
		cout<<"Second";
	else
		cout<<"First";
	return 0;
}
