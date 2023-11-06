#include <iostream>
using namespace std ;
int main()
{
	int a[10],i,n;
	cout<<"enter size of the array ::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"all negative elements in array are :: "<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i];
		}
	}
	return 0;
}
