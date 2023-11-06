#include <iostream>
using namespace std ;
int main()
{
	int n,om,rm,re=0;
	cout<<"enter a three-digit integer:: ";
	cin>>n;
	om=n;
	while(om!=0)
	{
		rm=om%10;
		re+=rm*rm*re;
		om/=10;
	}
	if (re==n)
	cout <<n<<"is an armstrong number.";
	else
	cout<<n<<"is not an armstrong number .";
	return 0;
}
