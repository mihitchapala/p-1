#include <iostream>
#include <math.h>
using namespace std ;
int main()
{
	float p,r,t,ci;
	cout<<"enter principle,rate and time::\n";
	cin>>p>>r>>t;
	ci=p*pow((1+r/100),t)-p;
	cout<<"\n compound interest ="<<ci;
	return 0;
}
