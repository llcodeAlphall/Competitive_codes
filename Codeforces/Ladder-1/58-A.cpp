#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,mtr;
	str="";mtr="hello";
	cin>>str;
	int i,k;k=0;
	for(i=0;i<str.size();i++)
	{
		if(str[i]==mtr[k])
			k++;
	}
	if(k<5)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
