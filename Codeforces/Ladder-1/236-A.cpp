#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int count=0;
	cin>>str;
	int arr[26]={};
	
	for(char i:str)
		arr[int(i)-97]=1;
	for(int i:arr)
		if(i!=0)
			count++;
	
	if(count%2!=0)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
	return 0;
}
