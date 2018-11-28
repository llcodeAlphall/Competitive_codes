#include<bits/stdc++.h>
using namespace std;
int main()
{
 	string str="9845";
 	int i,sum;sum=0;
 	for(i=0;i<str.size();i++)
 	sum+=int(str[i])-48;
 	cout<<sum;
	
	return 0;
}
