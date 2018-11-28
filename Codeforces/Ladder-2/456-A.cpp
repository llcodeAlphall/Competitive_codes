#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double

bool func(pair<int,int> a,pair<int,int> b)
{
	if(a.first < b.first)
		return 1;
	else
		return 0;
}

int main()
{
	ull n,no,i;
	cin>>n;
	vector<pair<int,int>> x(n);
	for(i=0;i<n;i++)
	{
		cin>>no;
		x[i].first=no;
		cin>>no;
		x[i].second=no;
	}
	sort(x.begin(),x.end(),func);
	
	for(i=0;i<n-1;i++)
	{
		if(x[i].second > x[i+1].second)
			{
				cout<<"Happy Alex";
				return 0;
			}
	}
	cout<<"Poor Alex";
	
	return 0;
}
