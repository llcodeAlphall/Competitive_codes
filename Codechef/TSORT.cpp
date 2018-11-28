#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*int t;;
	cin>>t;
	vector <int> arr(t);
	while(t>0)
	{
		t--;
		cin>>arr[t];
	}
	sort(arr.begin(),arr.end());
	int i;
	for(i=0;i<arr.size();i++)	
		cout<<arr[i]<<endl;
	return 0;
	*/
	
	int t,n;
	cin>>t;
	map<float,int> m;
	map<float,int>::iterator i;		
	while(t>0)
	{
		t--;
		cin>>n;
		
		i = m.find(n);
  		if (i != m.end())
  			m.insert(make_pair(n+0.001,n));
  		else
  			m.insert(make_pair(n,n));
	}
	
	for(i=m.begin();i!=m.end();i++)
		cout<<i->second;
	return 0;
}
