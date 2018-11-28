#include<bits/stdc++.h>
using namespace std;

int main()
{
	double i,j;
	cin>>i>>j;
	cout<<std::fixed;
	cout<<std::setprecision(2);
	if ((int(i)%5!=0) || (i+0.50>=j) )
		cout<<j;
	else
		{
			cout<<(j-i-0.50);
		}
	return 0;
}
