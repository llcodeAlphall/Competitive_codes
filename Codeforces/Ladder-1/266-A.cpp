#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char cur,c;
	cin>>n;
	vector<char> str(n);
	int count=0;
	int i;
	cin>>cur;
	for(i=1;i<n;i++)
	{		
		cin>>c;		
		if(c==cur)
			{
				count++;
			}
		cur=c;
	}
	cout<<count;
}
