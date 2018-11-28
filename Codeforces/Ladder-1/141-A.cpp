#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[26]={};
	string str;
	cin>>str;
	int i;
	for (i=0;i<str.size();i++)
		arr[int(str[i]-65)]++;
	cin>>str;
	for (i=0;i<str.size();i++)
		arr[int(str[i]-65)]++;
	cin>>str;
	for (i=0;i<str.size();i++)
		arr[int(str[i]-65)]--;
	for(i=0;i<26;i++)
		if(arr[i]!=0)	
			{
				cout<<"NO";
				return 0;
			}	
	cout<<"YES";
	return 0;
}
