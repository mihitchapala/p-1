#include <iostream>
using namespace std ;
int main()
{
	float p,r,t,si;
	cout<<"enter principle amount :";
	cin>>p;
	cout<<"enter rate of interest :";
	cin>>r;
	cout<<"enter time period :";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"simple interest amount :"<<si;
	return 0;
}
