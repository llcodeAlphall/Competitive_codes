#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	char no,ch,ch1;ch1='W';
	for(i=0;i<n;i++)
	{
		if(ch1=='W')
			ch1='B';
		else
			ch1='W';
		ch=ch1;
		for(j=0;j<m;j++)
		{
			cin>>no;
			if(no=='-')
				cout<<no;
			else
				cout<<ch;
			if(ch=='W')
				ch='B';
			else
				ch='W';
		}
		cout<<endl;
	}
	return 0;
}
