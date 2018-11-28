#include<bits/stdc++.h>
using namespace std;
int main()
{
	int px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
	cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;
	double a,b,x,y,z,temp;
	x=(px+cy)/(px+cx);x=x*x;x=1-x;
	y=2*px*(py+cy)/(px+cx);y=y-2*py;y=y+2*(px+cx+py+cy)*(py+cy);
	z=r*r-((px*cx+py*cy)*(px*cx+py*cy) + b*b*(py+cy)*(py+cy))/((px+cx)*(px+cx));
	z=z+(2*px/(px+cx))*((px*cx+py*cy));z=-z;
	temp=sqrt(y*y-4*a*c);
	b=-y+temp;
		
	return 0;
}
