#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6][6];
	int i,j;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			cin>>arr[i][j];
	int count,max;max=0;
	string str="12345";
	for(i=1;i<=120;i++)
		{
			count=0;
			count=arr[int(str[0])-48][int(str[1])-48] + arr[int(str[1])-48][int(str[0])-48] + 
				  arr[int(str[1])-48][int(str[2])-48] + arr[int(str[2])-48][int(str[1])-48] + 
				  (arr[int(str[2])-48][int(str[3])-48] + arr[int(str[3])-48][int(str[2])-48])*2 + 
				  (arr[int(str[3])-48][int(str[4])-48] + arr[int(str[4])-48][int(str[3])-48])*2;
			if(count>max)
				max=count;
			next_permutation(str.begin(),str.end());
		}
	cout<<max;
	
	return 0;
}
