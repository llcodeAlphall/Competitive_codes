#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int k,i;
	cin>>k;
	string str;
	int arr[130]={};
	cin>>str;
	string mtr;mtr="";
	for(i=0;i<str.size();i++)
		{
			if(arr[str[i]] == 0)
				mtr+=str[i];
			arr[str[i]]++;			
		}	
	sort(mtr.begin(),mtr.end());
	for(i=0;i<str.size();i++)
		{
			if(arr[str[i]]%k!=0)			
			{
				cout<<-1;
				return 0;
			}
		}
	
	int j,l;
	for(l=0;l<k;l++)
		for(i=0;i<mtr.size();i++)
			for(j=0;j<arr[mtr[i]]/k;j++)
				cout<<mtr[i];
	return 0;
}



