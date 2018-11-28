#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream in("input.txt");
  	ofstream out("output.txt");
	int m,n;
	in>>n>>m;
	if(n>m)
		{
			while(m--)
			{
				out<<"BG";n--;
			}
			while(n--)
				out<<"B";
		}
	else
		{
			while(n--)
			{
				out<<"GB";m--;
			}
			while(m--)
				out<<"G";
		}
	return 0;
}
