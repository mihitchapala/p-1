#include <iostream>
using namespace std ;
int main()
{
	int n,sum=0,i;
	cout<<"enter a positive integer ::";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum= "<<sum;
	return 0;
}
