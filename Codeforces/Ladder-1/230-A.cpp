#include<bits/stdc++.h>
using namespace std;
bool func(pair<int,int> a, pair<int,int> b)
{
	return a.first < b.first; 
}
int main()
{
	int s,n,i;
	cin>>s>>n;
	vector<pair<int,int>> arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i].first>>arr[i].second;
	sort(arr.begin(),arr.end(),func);

	for(i=0;i<n;i++)
		{
			if(s>arr[i].first)
				s+=arr[i].second;
			else 
				{
					cout<<"NO";
					return 0;
				}
		}
	cout<<"YES";
	return 0;
}
