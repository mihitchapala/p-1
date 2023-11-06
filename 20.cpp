#include <iostream>
using namespace std ;
int main()
{
	int f(int);
	int fa,v;
	cout<<"enter any number ::  ";
	cin>>v;
	fa=f(v);
	cout <<"factorial of a number is :"<<fa<<endl;
	return 0;
}
int f(int n)
{
	if (n<0)
	return(-1);
	if(n==0)
	return(1);
	else
	{
		return(n*f(n-1));
	}
}
