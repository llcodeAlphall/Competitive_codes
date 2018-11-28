#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int n;
	cin>>n;
	int l;
	while(n--)
	{
		cin>>str;
		l=str.size();
		if(l<=10)
			cout<<str<<endl;
		else
			{
				cout<<str[0]<<l-2<<str[l-1]<<endl;
			}
	}
	return 0;
}
