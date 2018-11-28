#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[3]={};
	string str;
	int i,j;
	cin>>str;
	for(i=0;i<str.size();i+=2)
		arr[str[i]-49]++;
	int plus=str.size()/2;
	for(i=0;i<3;i+=1)
		{
			for(j=0;j<arr[i];j++)
				{
					cout<<i+1;
					if(plus>0)
						cout<<"+";
					plus--;
				}			
		}
	return 0;
}
