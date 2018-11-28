#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int arr[123]={};
	int i;
	for(i=0;i<s1.size();i++)
	{
		if( (s1[i]>64 && s1[i]<91) || (s1[i]>96 && s1[i]<123) )
		arr[s1[i]]++;
	}
	for(i=0;i<s2.size();i++)
	{
		if( (s2[i]>64 && s2[i]<91) || (s2[i]>96 && s2[i]<123) )
		{
			arr[s2[i]]--;
			if(arr[s2[i]]<0)
				{
					cout<<"NO";
					return 0;
				}
		}		
	}
	cout<<"YES";
	return 0;
}
